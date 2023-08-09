#include<bits/stdc++.h>
using namespace std;

int missingNumber(int a[],int n,int N){
    int flag;
    for(int i=1;i<=N;i++){
        flag = 0;
        for(int j=0;j<n-1;j++){
            if(a[j]==i){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

int main(){
    int a[5] = {1,2,3,5,6};
    int miss = missingNumber(a,5,6);
    cout<<miss;
}