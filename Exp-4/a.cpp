#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter no. of entity = ";cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cout<<"Enter data = ";cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<"The second largest element = "<<arr[n-2]<<endl;
}