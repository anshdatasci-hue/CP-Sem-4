#include <iostream>
using namespace std;

long long result(int n,int m){
	if(m==0){
		return 1;
	}
	return n*result(n,m-1);
}

int main(){
	int n,m;
	cout<<"Enter no. & power = ";
	cin>>n>>m;
	cout<<"The result = "<<result(n,m)<<endl;
}
