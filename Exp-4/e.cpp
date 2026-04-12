#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3};
    int n=arr.size();
    cout<<"Before Shift: "; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        arr[i]=arr[i+1];
    }
    cout<<"After Shift: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}