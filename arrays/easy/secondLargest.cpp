#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {56,2,7,98,8};
    int max = a[0];
    for(int i = 0; i < 5; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    cout<<"max : "<<max<<endl;
    int secondMax = -1;
    for(int i = 0; i < 5 ; i++){
        if(secondMax < a[i] && a[i] != max){
            secondMax = a[i];
        }
    }
    cout<<"second max : "<<secondMax<<endl;

    
}