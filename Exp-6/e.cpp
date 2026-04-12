//working on two pair algo, find pair of element whose sum is equal to x
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,6,8,11,13};
    int n=arr.size();
    int target=14,left=0,right=n-1,sum;
    while(left<right){
        sum=arr[left]+arr[right];
        if(sum==target){
            cout<<arr[left]<<" + "<<arr[right]<<" = "<<target<<endl;
            break;
        }else if(sum<target){
            left++;
        }else{
            right--;
        }
    }
}