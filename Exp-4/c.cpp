#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n,c=0,temp;
    cout<<"Enter no. of entity = ";cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cout<<"Enter data = ";cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[c]=arr[i];
            c++;
        }
    }
    for(i=c;i<n;i++){
        arr[i]=0;
    }
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}