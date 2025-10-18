#include<bits/stdc++.h>
using namespace std;

using ll= long long;
int main()
{
    int n,q;
    cin>>n>>q;

    deque<ll> dq;

    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;

        dq.push_back(a);
    }
    ll global_add = 0;

    while(q--)
    {
        int type;
        cin>>type;

        if(type==1)
        {
            ll p; cin>>p;
            dq.push_back(p-global_add);
        }
        else if(type==2)
        {
            dq.pop_front();
        }
        else if(type==3)
        {
            dq.pop_back();
        }
        else if(type==4)
        {
            ll x;cin>>x;
            global_add+=x;
        }
        else if(type==5)
        {
            ll k; cin>>k;
            deque<long long> newdq;
            {
                for(auto &v : dq)
                {
                    if(v+global_add>=k)newdq.push_back(v);
                }
                dq.swap(newdq);
            }
        }
        else if(type==6)
        {
            int m; cin>>m;
            ll sum=0;

            for(int i=0;i<m;i++)
            {
                sum+=dq.back()+global_add;
                dq.pop_back();
            }
            dq.push_front(sum-global_add);
        }
    }
    ll total = 0;
    for(auto &t :dq)total+= t + global_add;

    cout<<dq.size()<<" "<< total <<"\n";
}