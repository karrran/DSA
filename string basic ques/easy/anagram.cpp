#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){

    if(s1.length()!=s2.length()) return false;
    int n=s1.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(s1[i]>s1[j]) swap(s1[i],s1[j]);
            if(s2[i]>s2[j]) swap(s2[i],s2[j]);
        }

        
    }
    cout<<s1<<endl;
    cout<<s2<<endl;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i])return false;
    }
    return true;



}

int main(){
    cout<<isAnagram("orange","aegnor");
}