#include <iostream>


using namespace std;


int InsterInArray(int arr[], int n, int pos, int cap, int x){
    if(n == cap){
        return n;
    }

    int idx = pos-1;

    for(int i = n-1; i >= pos; i-- ){
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return n+1;
}

int main(){
    int n = 5;
    int cap = 5;
    int arr[cap];
    int pos = 3;
    int x = 100;

    arr[0] = 1;
    arr[1] = 5;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    
    int newSize = InsterInArray(arr,n,pos,cap,x);

    cout<<"New Size After insertion is: " << newSize;
    
    return 0;
}