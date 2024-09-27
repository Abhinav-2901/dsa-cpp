#include <iostream>

using namespace std;


void LeftRotateByOne(int arr[], int n){

    int first = arr[0];
    for(int i = 1; i < n
    ; i++){
        arr[i-1] = arr[i];
    }

    arr[n-1] = first;


    for(int i = 0; i < n ; i++){
        cout << arr[i] << " "; 
    }

}

int main(){
    int n = 5;
    int arr[n];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    cout << "Actual Array: ";
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " "; 
    }

    cout << endl;

    cout << "New Array: ";

    LeftRotateByOne(arr, n);

    return 0;
}