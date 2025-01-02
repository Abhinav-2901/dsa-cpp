#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<vector<string> > anagrams(vector<string>& arr) {
    unordered_map<string, vector<string> > anagramGroups;

    // Group words by their sorted string
    cout << "Grouping words by sorted string:\n";
    for (const string& word : arr) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        anagramGroups[sortedWord].push_back(word);
        cout << "Word: " << word << " -> Sorted: " << sortedWord << "\n";
    }

    // Collect the anagram groups in order of their first appearance in the array
    vector<vector<string> > result;
    unordered_set<string> processedKeys; // Keep track of processed sorted strings

    cout << "\nProcessing groups:\n";
    for (const string& word : arr) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        cout << "Checking word: " << word << " -> Sorted: " << sortedWord << "\n";
        
        if (processedKeys.find(sortedWord) == processedKeys.end()) {
            processedKeys.insert(sortedWord);
            auto group = anagramGroups[sortedWord];
            result.push_back(group);  // Do not sort the group here
            cout << "Added group: ";
            for (const auto& w : group) {
                cout << w << " ";
            }
            cout << "\n";
        } else {
            cout << "Group already processed for sorted: " << sortedWord << "\n";
        }
    }

    return result;
}

int main() {
    vector<string> arr1;
    arr1.push_back("act");
    arr1.push_back("god");
    arr1.push_back("cat");
    arr1.push_back("dog");
    arr1.push_back("tac");

    // Print result for arr1
    vector<vector<string>> result = anagrams(arr1);

    cout << "\nFinal Result for arr1:\n";
    for (const auto& group : result) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}