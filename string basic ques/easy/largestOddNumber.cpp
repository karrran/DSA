#include<bits/stdc++.h>
using namespace std;

string oddNumber(string s){
    int n = s.size();
    int r;
    bool flag = false;
    
    for(int i= n-1;i>=0;i--){
       
        if((s[i]-'0')&1){
            r=i;
            flag = true;
            break;
        }
    }
    if(flag){
        return s.substr(0,r+1);
    }
    else{
        return "";
    } 
}

int main(){
    string s = "35247248";
    string number = oddNumber(s);
    cout<<number;
}