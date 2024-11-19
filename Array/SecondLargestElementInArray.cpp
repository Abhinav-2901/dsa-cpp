#include <iostream>

using namespace std;

int SecondLargestElement(int arr[], int n) {
    if (n < 2) {
        // Not enough elements for a second-largest
        return -1;
    }

    int largest = 0;    // Index of the largest element
    int secondLargest = -1; // Index of the second-largest element

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest]) {
            secondLargest = largest; // Update second largest
            largest = i;             // Update largest
        } else if (arr[i] != arr[largest]) {
            if (secondLargest == -1 || arr[i] > arr[secondLargest]) {
                secondLargest = i; // Update second largest
            }
        }
    }

    return secondLargest;
}

int main(){

    int n = 3;
    int arr[n];

    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    int secl = SecondLargestElement(arr, n);
    if(secl == -1){
        cout<<"Second Largest Element element not found";
    }
    else{
        cout<<"Second Largest Element element in array is: " << arr[secl];
    }
    return 0;
}