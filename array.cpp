#include<iostream>
using namespace std;

int main()
{
    int n,ct=0;
    cin>>n;

    int a[205];

    for(int i=0;i<n;i++)cin>>a[i];

    for(int i=0;i<n;i++)
    {
        int chk[205]={0};

        int mn=10000,mx=-10000;

        for(int j=i;j<n;j++)
        {
            if(a[j]==0){}

            int len = j-i+1;
            if(chk[a[j]]!=0)
            {
                break;
            }
            chk[a[j]]=1;

            mn=min(mn,a[j]);
            mx=max(mx,a[j]);

            if(mn==1&&mx==len)
            ct++;
        }
        
    }
    cout<<ct;
}