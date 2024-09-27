#include <iostream>

using namespace std;

bool isArraySorted(int arr[], int n){
    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i])
            return false;
    }
    return true;
}

int main(){

    int n = 5;
    int arr[n];

    arr[0] = 100;
    arr[1] = 200;
    arr[2] = 300;
    arr[3] = 501;
    arr[4] = 500;

    if(isArraySorted(arr,n)){
        cout << "Arry is sorted";
    }
    else{
        cout << "Array is not sorted";
    }
    return 0;
}