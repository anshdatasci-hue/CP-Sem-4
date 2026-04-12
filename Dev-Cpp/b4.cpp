#include <iostream>
using namespace std;

void check(int n){
	if(n==0){
		cout<<"The no. is 0."<<endl;
		return;
	}
	if(n&1){
		cout<<"It is odd..!"<<endl;
	}else{
		cout<<"It is even...!"<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter no. = ";
	cin>>n;
	check(n);
}
