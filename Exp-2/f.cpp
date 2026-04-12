#include <bits/stdc++.h>
using namespace std;

long long chech(int n){
    if(n==0)
        return 1;
    return n * chech(n-1);
}

int main(){
    int n;
    cout<<"Enter a no. = ";
    cin>>n;

    long long x = chech(n);
    cout<<"Factorial = "<<x<<endl;

    int count = 0;
    while(x > 0){
        count++;
        x /= 10;
    }

    cout<<"No. of digits = "<<count;
}
