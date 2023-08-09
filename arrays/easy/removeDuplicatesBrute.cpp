#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[7] = {1,1,2,2,2,3,3};

    set<int> s;

    for(int i=0;i<7;i++){
        s.insert(a[i]);
    }

    int index = 0;

    for(auto it: s){
        a[index] = it;
        index++;
    }
    
    for(auto it: s){
        cout<<it<<" ";
    }
}