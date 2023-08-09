#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int len,i=0;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    cout<<"length of the string is: "<<str.length();
    
}