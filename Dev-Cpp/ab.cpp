#include <iostream>
using namespace std;

int main(){
	int a[10][10],t[10][10],i,j,row,column;
	cout<<"Enter no. of rows and columns = ";
	cin>>row>>column;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			cout<<"Enter data = ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			t[i][j]=a[j][i];
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
