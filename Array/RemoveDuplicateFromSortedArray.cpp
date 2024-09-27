#include <iostream>

using namespace std;


int RemoveDuplicateFromSortedArray(int arr[], int n){
    int res = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int n = 5;
    int arr[n];

    arr[0] = 100;
    arr[1] = 100;
    arr[2] = 100;
    arr[3] = 100;
    arr[4] = 100;

    int size = RemoveDuplicateFromSortedArray(arr, n);
    cout<< "New Array Size is : " << size;
    return 0;
}