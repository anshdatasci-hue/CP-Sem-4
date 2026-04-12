#include <iostream>
using namespace std;

int main(){
	int n,rev=0,temp,x;
	cout<<"Enter no. = ";
	cin>>n;
	temp=n;
	while(temp>0){
		x=temp%10;
		temp=temp/10;
		rev=(rev*10)+x;
	}
	if(rev==n){
		cout<<"It is a palindrome number...!"<<endl;
	}else{
		cout<<"It is not a palindrome number...!"<<endl;
	}
}
