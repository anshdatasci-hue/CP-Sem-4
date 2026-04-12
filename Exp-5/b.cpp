//Division, Mid_Square, Folding, Multiplication Methord:
#include <bits/stdc++.h>
using namespace std;

void divide(int n,int hash[]){
    long long num;
    cout<<"Enetr a no. to be stored = ";cin>>num;
    if(num%n<n){
        int index=num%n;
        if(hash[index]==-1){
            hash[index]=num;
        }else{
            cout << "Collision occurred at index " << index << endl;
            cout<<"Therefore by linear probing:"<<endl;
            int i=1;
            while(hash[index+i]!=-1){
                i++;
            }
            int newindex=(index+i)%n;
            cout<<"new index = "<<newindex<<endl;
            hash[newindex]=num;
        }
    }else{
        cout<<"The number "<<num<<" cannot be stored at the given index...!"<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<hash[i]<<" ";
    }cout<<endl;
}

void midsquare

void folding(){
    int n;
    cout<<"Enter size of array = ";cin>>n;
    int hash_div[n];
    int hash_mid[n];
    int hash_fold[n];
    int hash_mult[n];
    for(int i=0;i<n;i++){
        hash_div[i]=-1;
        hash_mid[i]=-1;
        hash_fold[i]=-1;
        hash_mult[i]=-1;
    }=
    long long num;
    cout<<"Enetr a no. to be stored = ";cin>>num;
    long long sum=0,neww=num;
    while(neww>0){
        int x=neww%100;
        sum=sum+x;
        neww=neww/100;
    }
    int index=sum%n;
    hash[index]=num;
    for(int i=0;i<n;i++){
        cout<<hash[i]<<" ";
    }
}

void multiplication



int main(){
    int n;
    cout<<"Enter size of array = ";cin>>n;
    vector<int> hash(n);
    for(int i=0;i<n;i++){
        hash[i]=-1;
    }
    long long num;
    cout<<"Enetr a no. to be stored = ";cin>>num;
    long long sum=0,neww=num;
    while(neww>0){
        int x=neww%100;
        sum=sum+x;
        neww=neww/100;
    }
    int index=sum%n;
    hash[index]=num;
    for(int i=0;i<n;i++){
        cout<<hash[i]<<" ";
    }
}