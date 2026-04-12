//Insertion sort
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> array={5, 2, 9, 1, 5, 6};
    int n=array.size();
    int key;
    for(int i=1;i<n;i++){
        key=array[i];
        int j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
    for(int i=0;i<n;i++){
         cout<<array[i]<<" ";
    }
}