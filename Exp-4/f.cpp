#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num,flag=0;
    cout<<"Enter no. of entity = ";cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the no. to check = ";cin>>num;
    auto it=find(arr.begin(),arr.end(),num);
    if(it==arr.end()){
        cout<<num<<" not present....!"<<endl;
        return 0;
    }
    int index=it-arr.begin();
    for(int i=index+1;i<n;i++){
        if(arr[i]>arr[index]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<num<<" is not leader no. !"<<endl;
    }else{
        cout<<num<<" is leader no. !"<<endl;
    }
}