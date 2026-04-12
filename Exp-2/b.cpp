#include <iostream>
using namespace std;

void check(int n, int pos){
    if(n==0){
        cout<<"The no. is 0.";
        return;
    }
    if(n & (1<<pos)){
        cout<<"its set...!"<<endl;
    }else{
        cout<<"its clear...!"<<endl;
    }
}

int main(){
    int n,pos;
    cout<<"Enter no. & position = ";cin>>n>>pos;
    check(n,pos);
}