#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> num;
    vector<tuple<int,int,int>> ans;

    while(cin>>n)
    {
        num.push_back(n);
    }
    int start=0;

    for(int i=0;i<num.size();i++)
    {
        if(num[i]!=num[i+1])
        {
            ans.push_back({num[i],start,i});
            start=i;
        }
    }
    ans.push_back({num[num.size()-1],start,(int)num.size()-1});

    sort(ans.begin(),ans.end(),[](auto &a,auto &b))
    {
        
        if(get<0>(ans[a])!=get<0>(ans[b]))return get<0>(a)<get<0>(b);

        return get<1>(a) < get<1>(b);
    };

    for(auto &x:num)
    {
        cout<<get<0>(x)<<" --> x[ "<< get<1>(x) << " : " <<get<2>(x)<< " ] ";
    }
}