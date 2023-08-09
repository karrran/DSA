#include<bits/stdc++.h>
using namespace std;

bool isRotation(string s1, string s2){
    int n=s1.length();
    int m=s2.length();
    if(n!=m) return false;

    string str=s1+s1;

    return (str.find(s2)!=string::npos);
}

//string::npos means that not found at position, return value of npos means that the substring was not found at the given position.