//Queue using array:
#include <bits/stdc++.h>
using namespace std;

int q[3], f = 0, r = -1;

void enqueue(int x){
    if(r == 2) return; 
    q[++r] = x;
}

int dequeue(){
    if(f > r) return -1; 
    return q[f++];
}

int main(){
    enqueue(10);
    enqueue(20);
    cout << dequeue(); 
}