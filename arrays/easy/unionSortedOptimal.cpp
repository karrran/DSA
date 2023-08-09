#include<bits/stdc++.h>
using namespace std;

vector<int> unionSorted(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> u;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(u.size()==0||u.back()!=a[i]){
                u.push_back(a[i]);
                
            }
            i++;
            
        }

        else{
            if(u.size()==0||u.back()!=b[j]){
                u.push_back(b[j]);
                
            }
            j++;
        }
    }
    while(j<n2){
        if(u.size()==0||u.back()!=b[j]){
            u.push_back(b[j]);
            
        }
        j++;
    }

    while(i<n1){
        if(u.size()==0||u.back()!=a[i]){
            u.push_back(a[i]);
            
        }
        i++;
    }
    return u;
}

int main(){
    vector<int> a = {1,1,2,3,4,5};
    vector<int> b = {2,3,4,4,5,6};
    vector<int> sorted = unionSorted(a,b);
    for(auto it: sorted){
        cout<<it<<" ";
    }
    
}