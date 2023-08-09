#include<bits/stdc++.h>
using namespace std;

void moveZeroes(int a[],int n){
   int j=-1;
   for(int i=0;i<n;i++){
    if(a[i]==0){
        j=i;
        break;
    }
   }
   for(int i=j+1;i<n;i++){
    if(a[i]!=0){
        swap(a[j],a[i]);
            j++;
        
    }
   }
}

int main(){
    int a[10]={1,0,2,3,2,0,0,4,5,1};
    moveZeroes(a,10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
}