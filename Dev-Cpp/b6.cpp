#include <iostream>
using namespace std;

long long fact(int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}

int main(){
	int n;
	cout<<"Enter no. = ";
	cin>>n;
	cout<<"Factorial = "<<fact(n)<<endl;
	int cnt=0;
	long long num=fact(n);
	while(num>0){
		cnt++;
		num=num/10;
	}
	cout<<"The no. of digit in factorial = "<<cnt<<endl;
}
