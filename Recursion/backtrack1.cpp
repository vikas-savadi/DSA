#include<bits/stdc++.h>
using namespace std;
int i;
void f(int i){
    if (i<1) return;
    i--;
    f(i-1);
    cout<<i<<endl;
}
int main(){
    cout<<"Enter a value for N: ";
    cin>>i;
    f(i);
}

