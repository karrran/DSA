#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {1,7,2,5,4};
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for(int i=0;i<5;i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && ssmallest > a[i]){
            ssmallest = a[i];
        }
    }
    cout<<"Smallest : "<<smallest<<endl;
    cout<<"Second Smallest : "<<ssmallest<<endl;

}