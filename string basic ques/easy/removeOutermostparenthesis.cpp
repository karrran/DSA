#include<bits/stdc++.h>
using namespace std;

string removeParenthesis(string s){
    int count =0;
    string ans="";
    bool flag = true;
    for(int i=0;i<s.size();i++){

        if(s[i]=='('){
            count++;
        }

        if(s[i]==')'){
            count--;
        }

        if(count==1&&flag==true){
            flag = false;
            continue;
        }

        if(count==0&&flag==false){
            flag=true;
            continue;
        }
        ans+=s[i];
    }
    return ans;
}

int main(){
    string s ="(()()())(()())";
    string ans =removeParenthesis(s);
    
    cout<<ans;
}