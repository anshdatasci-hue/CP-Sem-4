#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size(),temp;
    temp=arr[0];
    cout<<"Array before: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        arr[i]=arr[i+1];
    }
    cout<<endl;
    arr[n-1]=temp;
    cout<<"Array After rotate: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}