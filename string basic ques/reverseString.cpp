#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    int n = str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    reverseString(str);
    string s = reverseString(str);
    cout<<"reversed string is: "<<s;
}