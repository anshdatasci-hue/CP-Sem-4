//To find maximum AND value from an array..!
#include <iostream>
using namespace std;

int check(int arr[], int n){
    int maxand;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int var=arr[i]&arr[j];
            if(var>maxand){
                maxand=var;
            }
        }
    }
    return maxand;
}

int main(){
    int i,n;
    cout<<"Enter no. of entity = ";cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"Enter for "<<i+1<<" : ";cin>>arr[i];
    }
    cout<<"MAXEND = "<<check(arr,n)<<endl;
}