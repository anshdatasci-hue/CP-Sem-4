//To fink kth smallest element
#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<int> arr = {34,78,56,12,90,44,22,99,77,55};
     sort(arr.begin(),arr.end());
     int kth=3;
     if(kth>0 && kth<=arr.size()){
        cout<<"The kth first element = "<<arr[arr.size()-kth]<<endl;
     }else{
        cout<<"invalid k";
     }
}