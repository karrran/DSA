#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[7] = {1,1,2,2,2,3,3};

    int  i = 0;
    int n = 0;
    for(int j = 1 ; j < 7 ; j++ ){
        if(a[j]!=a[i]){
            a[i+1] = a[j];
            i++;
        }
    }
    n = i+1;

    for(int j = 0; j < n ; j++){
        cout<<a[j]<<" ";
    }
}