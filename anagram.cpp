#include<bits/stdc++.h>
using namespace std;

set<string> sets;

void fac(string &n,int st,int end){

    if(st==end)
    {
        sets.insert(n);
        return;
    }
    for(int i=st;i<=end;i++)
    {
        swap(n[st],n[i]);
        fac(n,st+1,end);
        swap(n[st],n[i]);
    }
}
int main()
{
    string n;
    cin>>n;

    fac(n,0,n.size()-1);
    for(auto &x : sets)
    {
        cout<<x<<" ";
    }   
}