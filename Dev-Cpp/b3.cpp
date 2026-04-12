#include <iostream>
using namespace std;

void operation(int arr[],int n){
	int maxand=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int var=arr[i]&arr[j];
			if(var>maxand){
				maxand=var;
			}
		}
	}
	cout<<"The maxand value  = "<<maxand<<endl;
}

int main(){
	int n;
	cout<<"Enter no. of array = ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter data = ";
		cin>>arr[i];
	}
	operation(arr,n);
}
