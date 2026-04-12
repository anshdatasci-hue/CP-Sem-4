#include <iostream>
using namespace std;

int main(){
    int a[10][10],b[10][10],sum=0,i,j,rows,columns,temp;
    cout<<"Enter no. of rows and columns = ";
    cin>>rows>>columns;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<"Enter for "<<i<<":"<<j<<" = ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            b[i][j]=a[j][i];
        }
    }
    cout<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}