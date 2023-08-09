#include<bits/stdc++.h>
using namespace std;

void rotateByDPlaces(int a[],int n,int d){
    d=d%n;
    int temp[d];
    
    for(int i=0;i<d;i++){
        temp[i] = a[i];
    }

    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    
    for(int i=n-d;i<n;i++){
        a[i] = temp[i-(n-d)];   
    }
}

int main(){
    int a[7] = {1,2,3,4,5,6,7};
    rotateByDPlaces(a,7,2);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}