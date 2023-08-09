#include<bits/stdc++.h>
using namespace std;

set<int> unionSorted(int a[],int b[],int m,int n){
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(a[i]);
        }
        return s;
}

int main(){
    int a[6] = {1,1,2,3,4,5};
    int b[5] = {2,3,4,4,5};
    set<int> s = unionSorted(a,b,6,5);
    for(auto it: s){
        cout<<it<<" ";
    }
}