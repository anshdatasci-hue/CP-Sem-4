#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of entity = ";cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int high=n-1,low=0,mid,key,flag=0;
    cout<<"Enter key = ";cin>>key;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            cout<<"The key "<<key<<" is present on index "<<mid<<" in sorted array. "<<endl;
            flag=1;
            return 0;
        }else if(key>arr[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if(flag==0){
        cout<<"The key "<<key<<" is not present...!"<<endl;
    }
}