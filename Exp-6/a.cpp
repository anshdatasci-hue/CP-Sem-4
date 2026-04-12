#include <bits/stdc++.h>
using namespace std;


int binary_search(vector<int> &array,int low,int high,int key){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(key==array[mid]){
        return mid;
    }else if(key>array[mid]){
        return binary_search(array,mid+1,high,key);
    }else{
        return binary_search(array,low,mid-1,key);
    }
}

int main(){
    int n,key;
    cout<<"Enter no. of array = ";cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int high=n-1,low=0,mid;
    sort(array.begin(),array.end());
    cout<<"Enter key = ";cin>>key;
    int value=binary_search(array,low,high,key);
    if(array[value]==key){
        cout<<"The key "<<key<<" is present on index "<<value<<endl;
    }else{
        cout<<"The key "<<key<<" is not present"<<endl;
    }
}