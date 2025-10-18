#include<iostream>
using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int findp = sum-m;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]+a[j]==findp)
            {
                cout<<i<<" "<<a[i]<<"\n";
                cout<<j<<" "<<a[j]<<"\n";
            }
        }
    }
}