#include <iostream>

using namespace std;


void MoveZerosToEnd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }


    for(int i = 0; i < n ; i++){
        cout << arr[i] << " "; 
    }

}

int main(){
    int n = 5;
    int arr[n];

    arr[0] = 100;
    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 105;
    arr[4] = 500;

    cout << "Actual Array: ";
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " "; 
    }

    cout << endl;

    cout << "New Array: ";

    MoveZerosToEnd(arr, n);

    return 0;
}