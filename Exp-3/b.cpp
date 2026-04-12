#include <iostream>
using namespace std;

long long summ(long long n){
    if (n==0)
        return 0;
    return (n%10)+summ(n/10);
}

int main(){
    long long n;
    cout<<"Enter a no. = ";cin>>n;
    if(n<=0){
        cout<<"Invalid no. "<<endl;
        return 0;
    }
    cout<<"The sum = "<<summ(n)<<endl;
}