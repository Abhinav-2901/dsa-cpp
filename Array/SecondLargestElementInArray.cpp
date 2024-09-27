#include <iostream>

using namespace std;

int SecondLargestElement(int arr[], int n){
    int largest = 0;
    int secl = -1;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[largest]){
            secl = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(secl == -1 || arr[i] > arr[secl]){
                secl = i;
            }
        }
    }

    return secl;
}

int main(){

    int n = 5;
    int arr[n];

    arr[0] = 10001;
    arr[1] = 1000;
    arr[2] = 1000;
    arr[3] = 1000;
    arr[4] = 1000;

    int secl = SecondLargestElement(arr, n);
    if(secl == -1){
        cout<<"Second Largest Element element not found";
    }
    else{
        cout<<"Second Largest Element element in array is: " << arr[secl];
    }
    return 0;
}