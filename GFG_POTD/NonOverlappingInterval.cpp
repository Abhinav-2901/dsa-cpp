#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};

    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
        return a[1] < b[1];
    });

    int prevEnd = INT_MIN;
    int result = 0;

    for(const auto& interval: intervals){
        if(interval[0] < prevEnd){
            result++;
        }
        else{
            prevEnd = interval[1];
        }
    }

    cout << result;
}