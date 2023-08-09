#include<bits/stdc++.h>
using namespace std;

int numberAppearsOnce(int a[],int n){
    int cnt=0;
    int num=0;
    for(int i=0;i<n;i++){
        num=a[i];
        for(int j=0;j<n;j++){
            if(num==a[j]){
                cnt++;
            }
        }
        if(cnt==1){
            return num;
        }
    }
    
}

int main(){
    int a[7] = {1,1,2,3,3,4,4};
    cout<<numberAppearsOnce(a,7);
}