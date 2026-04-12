#include <bits/stdc++.h>
using namespace std;

int check(int n){
    if(n==0){
        cout<<"wrong value...!";
        return 0;
    }
    return(n&(n-1));
}

int main(){
    int n;
    cout<<"Enter a no. = ";cin>>n;
    int res=check(n);
    if(res==0){
        cout<<n<<" is Power of 2"<<endl;
    }else{
        cout<<n<<" is not Power of 2"<<endl;
    }
}