//To find index of any peak element with time complixity O(logn):
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1 ,2 ,3, 4, 4, 4, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 67};
    int n=arr.size();
    int low=0,high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }else{
            high=mid;
        }
    }
    printf("The peak elsment is %d at index %d.",arr[low],low);
}