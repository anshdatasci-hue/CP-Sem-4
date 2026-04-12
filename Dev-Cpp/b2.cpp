#include <iostream>
using namespace std;

void chech(int n,int pos){
	if(n==0){
		return;
	}
	if(n&(1<<pos)){
		cout<<"It is set...!"<<endl;
	}else{
		cout<<"It is clear...!"<<endl;
	}
}

int main(){
	int n,pos;
	cout<<"Enter no. & position = ";
	cin>>n>>pos;
	if(n==0){
		cout<<"Invalid...!"<<endl;
		return 0;
	}else{
		chech(n,pos);
	}
}
