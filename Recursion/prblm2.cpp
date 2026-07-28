#include<bits/stdc++.h>
using namespace std;
int n ;
void Nto1(){
    if(n<=0) return;
    cout<<n<<endl;
    n--;
    Nto1();
}
int main(){
    cout<<"Enter a value for N:";
    cin>>n;
    Nto1();
}