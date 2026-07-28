#include<bits/stdc++.h>
using namespace std;
int cnt = 0; /*don't use count instead use cnt as std::count exists in library it'll throw a variable name error*/
void f(){
    if(cnt == 4 ) return;
    cout << cnt<< "\n"; /*you can also use cout<<endl to print it in the next line*/
    cnt++;
    f();
}
int main(){
    f();
}