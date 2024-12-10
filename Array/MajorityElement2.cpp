#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Function to find all majority elements that occur more than n/3 times in the array.
 * Implements the Boyer-Moore Voting Algorithm.
 */
vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size(); // Size of the array
    int candidate1 = -1, candidate2 = -1; // Two potential candidates for majority elements
    int count1 = 0, count2 = 0; // Counts associated with the two candidates

    // Phase 1: Candidate Selection
    // The goal is to find at most two candidates that could potentially be majority elements.
    for (int num : nums) {
        if (num == candidate1) {
            // Increment count1 if the current number matches candidate1
            count1++;
        } else if (num == candidate2) {
            // Increment count2 if the current number matches candidate2
            count2++;
        } else if (count1 == 0) {
            // If count1 is 0, replace candidate1 with the current number
            candidate1 = num;
            count1 = 1;
        } else if (count2 == 0) {
            // If count2 is 0, replace candidate2 with the current number
            candidate2 = num;
            count2 = 1;
        } else {
            // If the current number matches neither candidate, decrement both counts
            count1--;
            count2--;
        }
    }

    // At the end of this phase, candidate1 and candidate2 are the potential majority elements.

    // Phase 2: Validation
    // We count the actual occurrences of candidate1 and candidate2 in the array to verify if they occur more than n/3 times.
    count1 = count2 = 0;
    for (int num : nums) {
        if (num == candidate1) {
            count1++;
        } else if (num == candidate2) {
            count2++;
        }
    }

    // Prepare the result vector
    vector<int> result;
    if (count1 > n / 3) result.push_back(candidate1); // Add candidate1 if it satisfies the majority condition
    if (count2 > n / 3) result.push_back(candidate2); // Add candidate2 if it satisfies the majority condition

    // Sort the result to ensure output is in increasing order
    sort(result.begin(), result.end());

    return result;
}

int main() {
    // Example usage
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(6);
    arr.push_back(6);
    arr.push_back(6);
    arr.push_back(6);
    vector<int> result = majorityElement(arr);

    cout << "Candidates with more than n/3 votes: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}