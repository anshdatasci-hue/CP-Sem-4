#include <iostream>
using namespace std;

int check(int n){
	if(n==0){
		return 0;
	}
	return (n%10)+check(n/10);
}

int main(){
	int n;
	cout<<"Enter a no. = ";
	cin>>n;
	if(n==0){
		cout<<"No operations can be performed = ";
		return 0;
	}else{
		cout<<"The sum of digit of given no. = "<<check(n)<<endl;
	}
}
