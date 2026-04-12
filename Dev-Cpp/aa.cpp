#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	int cnt=0;
	string st="Hello i am ansh";
	string word;
	
	stringstream aa(st);
	
	while(aa>>word){
		cnt++;
	}
	cout<<"The no. of word a string have is "<<cnt<<endl;
	return 0;
}
