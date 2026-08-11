#include<bits/stdc++.h>
using namespace std;

int i;

void f(int i){
    if(i<1) return;
    cout<<i<<" ";
    f(i-1);
    
}

int main(){
    cout<<"enter a value for N: ";
    cin>>i;
    f(i);
}