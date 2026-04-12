//Implement sort() function using stl in cpp:
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {
        7, 3, 9, 5,84, 2,
        8, 4, 6, 1, 4,
        4, 10, 11,67, 12, 4,
        13,91, 14, 15, 16, 4
    };
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}