#include <iostream>

using namespace std;

void ReverseArray(int arr[], int n){
    int s = 0;
    int e = n-1;

    while(s < e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " "; 
    }
}

int main(){
    int n = 5;
    int arr[n];

    arr[0] = 100;
    arr[1] = 200;
    arr[2] = 300;
    arr[3] = 400;
    arr[4] = 500;

    cout << "Actual Array: ";
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
    cout << "Reversed Array: ";
    ReverseArray(arr, n);
    return 0;
}