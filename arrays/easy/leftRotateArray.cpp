#include<bits/stdc++.h>
using namespace std;

void leftRotate(int a[],int n){
    int first  = a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=first;
}

int main(){
    int a[5] = {1,2,3,4,5};
    leftRotate(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}