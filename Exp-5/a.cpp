//Division methord
#include <bits/stdc++.h>
using namespace std;


void CreateByLinearProbe(int n,int hash[]){
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

void CreateByQuadraticProbe(int n,int hash[]){
     long long num;
    cout<<"Enetr a no. to be stored = ";cin>>num;
    if(num%n<n){
        int index=num%n;
        if(hash[index]==-1){
            hash[index]=num;
        }else{
            cout << "Collision occurred at index " << index << endl;
            cout<<"Therefore by Quadratic probing:"<<endl;
            int i=1;
            while(hash[index+i]!=-1){
                i++;
            }
            int newindex=(index+i*i)%n;
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

int main(){
    int n,choice;
    cout<<"Enter size of array = ";cin>>n;
    int hash_no_1[n];
    int hash_no_2[n];
    for(int i=0;i<n;i++){
        hash_no_1[i]=-1;
        hash_no_2[i]=-1;
    }
    while(1){
        cout<<endl<<endl;;
        cout<<"1.>CreateByLinearProbe"<<endl;
        cout<<"2.>CreateByQuadraticProbe"<<endl;
        cout<<"3.>Exit"<<endl;
        cout<<"Enter choice = ";cin>>choice;
        switch(choice){
            case 1:CreateByLinearProbe(n,hash_no_1);break;
            case 2:CreateByQuadraticProbe(n,hash_no_2);break;
            case 3:exit(0);break;
            default:cout<<"Wrong choice...!";
        }
    }
}
