#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the next lexicographically greater permutation

void kadanesAlgorithm(vector<int> &arr)
{
    int n = arr.size();

    int max_current = arr[0];
    int global_max = arr[0];

    for(int i = 1; i < n; i++){
        max_current = max(arr[i], max_current + arr[i]);
        global_max = max(global_max, max_current);
    }

    cout << global_max << endl;
}

int main()
{
    // Initialize the array manually
    vector<int> arr;
    arr.push_back(-2);
    arr.push_back(-4);
    // arr.push_back(-8);
    // arr.push_back(7);
    // arr.push_back(-1);
    // arr.push_back(2);
    // arr.push_back(3);

    // Call nextPermutation function
    kadanesAlgorithm(arr);

    return 0;
}