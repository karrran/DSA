#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> a,vector<int> b){
    int n = a.size();
    int m = b.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
        }
    }
    return ans;
}

int main(){
    vector<int> b = {2,3,3,5,6,6,7};
    vector<int> a = {1,2,2,3,3,4,5,6};
    vector<int> ans = intersection(a,b);
    for(auto it: ans){
        cout<<it<<" ";
    }
}