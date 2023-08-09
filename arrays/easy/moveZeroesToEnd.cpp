#include<bits/stdc++.h>
using namespace std;


void moveZeroes(int a[],int n){
    vector<int> v;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            v.push_back(a[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        a[i]=v[i];
    }
    for(int i=v.size();i<n;i++){
        a[i]=0;
    }
}

int main(){
    int a[10] = {1,0,2,3,2,0,0,4,5,1};
    moveZeroes(a,10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
}

