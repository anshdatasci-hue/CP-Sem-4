#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int count=0;
    string st="Hello World!";
    string word;

    stringstream aa(st);

    while(aa>>word){
        count++;
    }

    cout<<count;
    return 0;
}