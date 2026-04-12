#include <iostream>
using namespace std;

long long power(int n,int m){
    if(m==0){
        return 1;
    }
    return n*power(n,m-1);
}

int main(){
    int n,m;
    cout<<"Enter no. and power = ";cin>>n>>m;
    cout<<"Power = "<<power(n,m)<<endl;
}