#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> num;
    vector<tuple<int,int,int>> temp;

    while(cin>>n)
    {
        num.push_back(n);
        if(cin.peek()=='\n')break;
    }
    int start=0;

    for(int i=1;i<num.size();i++)
    {
        if(num[i]!=num[i-1])
        {
            temp.push_back({num[i-1],start,i});
            start=i;
        }
    }

    
    temp.push_back({num[num.size()-1],start,(int)num.size()});

    int maxlen = 0;
        for (auto &t : temp) {
            int s = get<1>(t), e = get<2>(t);
            maxlen = max(maxlen, e - s);
        }
    vector<tuple<int,int,int>> ans;

        for (auto &t : temp) {
            int s = get<1>(t), e = get<2>(t);
            
            if(e-s==maxlen)
            {
                ans.push_back(t);
            }
        }
    
    sort(ans.begin(),ans.end(),[](auto &a,auto &b)
    {
        
        if(get<0>(a)!=get<0>(b))return get<0>(a)<get<0>(b);

        return get<1>(a)<get<1>(b);
    });

    for(auto x:ans)
    {
        cout<<get<0>(x)<<" --> x[ "<< get<1>(x) << " : " <<get<2>(x)<< " ] "<<"\n";
    }
}