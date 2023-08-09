#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,26,78,98,2,5};
    int max = arr[0];
    for(int i = 0; i<7 ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Max: "<<max;
}