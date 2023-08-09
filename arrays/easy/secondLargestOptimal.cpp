#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {1,7,4,5,2,7};
    int max = a[0];
    int slargest = -1;
    for(int i = 0 ; i < 6 ; i++){
        if(a[i] > max){
            slargest = max;
            max = a[i];
        
        }
        else if(a[i] < max && a[i] > slargest){
            slargest = a[i];
        }
    }
    cout<<"Second largest : "<<slargest;
}