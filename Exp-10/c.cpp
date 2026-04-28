//Dequeue using STL:
#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(10);
    dq.push_back(15);
    cout<<dq.front()<<" "<<dq.back();
}