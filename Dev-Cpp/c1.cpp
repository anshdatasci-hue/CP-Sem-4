#include <iostream>
using namespace std;

void recursion(int n){
	if(n==0){
		return;
	}
	cout<<n<<" ";
	recursion(n-1);
}

int main(){
	int n;
	cout<<"Enter no. = ";
	cin>>n;
	if(n==0){
		cout<<"No operations can be performed on "<<n<<endl;
		return 0;
	}else{
		recursion(n);
	}
}
