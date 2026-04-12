#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &array,int low,int high,long long key){
    int flag=0;
    long long mid=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(array[mid]==key){
            flag=1;
            return mid;
        }else if(key>array[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if(flag==0){
        return -1;
    }
}

int main(){
    int key;
    vector<int> array={1024 ,4 ,8192 ,2 ,64 ,2048, 6, 128, 10, 512, 258, 8, 4096, 32, 16384};
    int n=array.size();
    int high=n-1,low=0,mid;
    sort(array.begin(),array.end());
    cout<<"Enter key = ";cin>>key;
    while(true){
        int value=binary_search(array,low,high,key);
        if(value!=-1){
            cout<<"The "<<key<<" is present on index "<<value<<endl;
        }else{
            cout<<"The "<<key<<" is not present...!"<<endl;
        }
        if(key>1e6/(key*key)){
            cout<<"Program executed success fully...!"<<endl;
            break;
        }
        key=key*key*key;
    }
}

