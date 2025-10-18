#include<map>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,double> m;
    m["THB"]=1.0;
    vector<pair<int,string>> ans;

    for(int i=0;i<n;i++)
    {
        string n2;
        double d;
        cin>>n2>>d;

        m[n2]=d;
    }
    int money;
    string country,before;

    cin>>money;

    int j=0;

    while(cin>>country)
    {
        if(j==0)before=country;

        if(country!=before)
        {
            if(m.find(country)!=m.end())
            {
                money *= m[before]/m[country];
            }
        }
        ans.push_back({money,country});
        before=country;
        j++;
    }
    int i=0;

    for(auto x:ans)
    {
        if(i==ans.size()-1){
             
            cout<<x.first<<" "<<x.second;

        }
        else cout<<x.first<<" "<<x.second<<" -> ";

        i++;
    }

}