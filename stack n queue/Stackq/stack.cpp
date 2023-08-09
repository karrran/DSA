#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;

    cout<<s.empty()<<endl;

    cout<<s.size()<<endl;
}