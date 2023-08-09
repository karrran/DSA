#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){
   string ans;
   string w;
   int n=s.size();
   int i=0;
   int j=0;
   while(i<n){
    while(i<n&&i==' '){
        i++;
    }
    if(i>=n) break;
    j=i+1;
    while(j<n&&j!=' '){
        j++;
    }
    w = s.substr(j-i);
    if(ans.size()==0){
        ans = w;
    }
    else {
        ans = w+" "+ans;
    }
   }
   return ans;

}

int main(){
    string s ="my name is karan";
    cout<<reverseWords(s);
    cout<<"hello world";
}