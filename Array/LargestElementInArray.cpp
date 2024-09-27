#include <iostream>

using namespace std;

int LargestElement(int arr[], int n){
    int largest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    return largest;
}

int main(){

    int n = 5;
    int arr[n];

    arr[0] = 10;
    arr[1] = 4000;
    arr[2] = 1000;
    arr[3] = 900;
    arr[4] = 23;

    int largest = LargestElement(arr, n);
    cout<<"Largest element in array is: " << largest;
    return 0;
}