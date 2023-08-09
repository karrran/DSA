#include<bits/stdc++.h>
using namespace std;

void reverse(int start,int end,int a[]){
    while(start<=end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void rotateByDPlaces(int a[],int d,int n){
    reverse(0,d-1,a);
    reverse(d,n-1,a);
    reverse(0,n-1,a);
}

int main(){
    int a[7] = {1,2,3,4,5,6,7};
    rotateByDPlaces(a,3,7);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}