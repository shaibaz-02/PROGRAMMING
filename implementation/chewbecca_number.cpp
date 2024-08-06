#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;cin>>x;
    for(char& ele:x){
        if(ele>'4'){
            ele='9'-ele+'0';
        }
    }
    if(x[0]=='0'){
        x[0]='9';
    }
    cout<<x;
    return 0;
}