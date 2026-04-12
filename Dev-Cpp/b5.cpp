#include <iostream>
#include <cmath>
using namespace std;

void formula(int n){
	if(n==0){
		cout<<"The no. is 0."<<endl;
		return;
	}
	cout<<"The Approximate n! = "<<sqrt(2*M_PI*n)*pow(n/M_E,n)<<endl;
}

int main(){
	int n;
	cout<<"Enter no. = ";
	cin>>n;
	formula(n);
}
