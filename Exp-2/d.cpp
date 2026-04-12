#include <iostream> 
using namespace std;

bool cheak(int n){
    if(n==0){
        return 'x';
    }
    if(n&1)
    return true;
    else
    return false;
}

int main(){
    int n;
    cout<<"Enter a no. = ";
    cin>>n;
    if(cheak(n))
    cout<<"The no. "<<n<<" is odd."<<endl;
    else
    cout<<"The no. "<<n<<" is even."<<endl;
    return 0;
}