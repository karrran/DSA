#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n){
    for(int i = 1; i < n ; i++){
        if(a[i-1]>a[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {5,4,3,2,1};

    cout<<isSorted(a,5);
    cout<<isSorted(b,5);
}