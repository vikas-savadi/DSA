#include<bits/stdc++.h>
using namespace std;
int n;
int cnt = 1;
void f(){
    if(cnt>n) return;
    cout<<cnt<<endl;
    cnt++;
    f();
} 
int main(){
cout<<"enter a value for n:";
cin>>n;
f();
}