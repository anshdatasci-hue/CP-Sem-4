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
	cout<<"Enter a no. = ";
	cin>>n;
	if(n==0){
		cout<<"Invalid...!"<<endl;
		return 0;
	}else{
		recursion(n);
	}
	return 0;
}
