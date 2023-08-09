#include<bits/stdc++.h>
using namespace std;

int maxOnes(int a[],int n){
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
            maxi = max(maxi,cnt);
        }
        else if(a[i]==0){
            cnt=0;
        }
    }
    return maxi;
}

int main(){
    int a[9] = {1,1,0,1,1,1,0,1,1};
    cout<<maxOnes(a,9);

}