#include<bits/stdc++.h>
using namespace std;

void numberAppearsOnce(int a[],int n){
    map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it : mpp){
        if(it.second==1){
            cout<<it.first;
        }
    }
}

int main(){
    int a[7]={1,1,2,3,3,4,4};
    numberAppearsOnce(a,7);
}