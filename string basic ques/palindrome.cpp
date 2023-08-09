#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(string str){
    int flag = 1;
    int n = str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            flag = 0;
            break;
        }
    }
    if(flag==0) cout<<"Not palindrome!";
    else cout<<"Palindrome!";
}

int main(){
    string s = "level";
    checkPalindrome(s);
}