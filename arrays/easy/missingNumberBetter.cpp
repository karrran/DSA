#include<bits/stdc++.h>
using namespace std;

int missingNumber(int a[],int n,int N){
    int h[N+1]={0};
    int i;
    for(i=0;i<n;i++){
        h[a[i]]++;
    }
    for(i=1;i<N+1;i++){
        if(h[i]==0){
            return i;
        }
    }
    return i;
    
}
int main(){
    int a[5]={1,2,3,5,6};
    cout<<missingNumber(a,5,6);
}