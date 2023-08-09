#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> a, vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    int vis[n2] = {0};
    vector<int> ans;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]&&vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i]) break;
        }
    }

    return ans;
}

int main(){
    vector<int> a ={1,2,2,3,3,4,5,6};
    vector<int> b ={2,3,3,5,6,6,7};
    vector<int> ans = intersection(a,b);
    for(auto it: ans){
        cout<<it<<" ";
    }
}