#include <iostream>

using namespace std;

int DeleteFromArray(int arr[], int n, int x){
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            pos = i;
            break;
        }
    }

    if(pos != -1){
        for(int i = pos; i < n -1; i++){
            arr[i] = arr[i+1];
        }
        return n-1;
    }
    else{
        return n;
    }
}

int main(){
    int n = 5;
    int arr[n];
    int x = 2;

    arr[0] = 1;
    arr[1] = 5;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;

    int newSize = DeleteFromArray(arr, n, x);
    cout<<"New Size After Deletion is: " << newSize;    
    return 0;
}