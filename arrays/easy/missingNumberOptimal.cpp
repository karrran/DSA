#include<bits/stdc++.h>
using namespace std;

int missingNumber(int a[],int n,int N){
    int xor1=0;
    int xor2=0;

    for(int i=0;i<N-1;i++){
        xor1=xor1^a[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^N;

    return xor1^xor2;

}

int main(){
    int a[5]={1,2,4,5,6};
    cout<<missingNumber(a,5,6);
}