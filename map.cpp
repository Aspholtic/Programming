#include<map>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string temp;
    int n,k;
    double p,o,sum=0;
    cin>>n;
    map<string,pair<double,double>> m;

    for(int i=0;i<n;i++)
    {
        cin>>temp>>p;
        m[temp].first=p;
        m[temp].second=0.0;
    }
    double mx=-1000000;
    string fin;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>temp>>o;
        if(m.find(temp)!=m.end())
        {
            m[temp].second+=m[temp].first*o;
            sum+=m[temp].first*o;
            if(m[temp].second>mx)
            {
                mx=m[temp].second;
            }
        }
    }
    if(sum==0)
    {
        cout<<"No ice cream sales";
    }
    else 
    {
        cout<<"Total ice cream sales: " <<sum<<endl;
        
        cout<<"Top sales: ";

        vector<pair<string,double>> v;

        for(auto &q:m)
        {
            v.push_back({q.first,q.second.second});
        }
        for(int i=0;i<n;i++)
        {
            if(v[i].second==mx)
            {
                cout<<v[i].first<<" ";
            }
        }
    }
}