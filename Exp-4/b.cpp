#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n,flag=0;
    cout<<"Enter no. of array = ";cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cout<<"Enter data = ";cin>>arr[i];
    }
    int great=arr[n-1];
    for(i=0;i<n;i++){
        if(arr[i]>great){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Array is not sorted"<<endl;
    }
    if(flag==0){
        cout<<"Array is sorted"<<endl;
    }
    
}