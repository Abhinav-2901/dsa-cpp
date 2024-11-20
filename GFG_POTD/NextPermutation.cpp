#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the next lexicographically greater permutation

void nextPermutation(vector<int> &arr)
{
    int n = arr.size();

    // Step 1: Find the first decreasing element from the right
    int firstSmallIndex = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i - 1] < arr[i])
        {
            firstSmallIndex = i - 1;
            break;
        }
    }

    // Step 2: If found, find the smallest number larger than arr[firstSmallIndex]
    if (firstSmallIndex != -1)
    {
        int nextSmallBigIndex = -1;
        for (int i = n - 1; i > firstSmallIndex; i--)
        {
            if (arr[i] > arr[firstSmallIndex])
            {
                nextSmallBigIndex = i;
                break;
            }
        }
        // Step 3: Swap the two elements
        int temp = arr[firstSmallIndex];
        arr[firstSmallIndex] = arr[nextSmallBigIndex];
        arr[nextSmallBigIndex] = temp;
    }

    // Step 4: Reverse the portion of the array after the firstSmallIndex
    int s = firstSmallIndex + 1;
    int e = n - 1;
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

int main()
{
    // Initialize the array manually
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(0);

    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call nextPermutation function
    nextPermutation(arr);

    cout << "Next permutation: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}