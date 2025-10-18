#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    string a;
    double b;
    vector<tuple<double,string,double>> list;

    cin>>a;
    while(a!="END")
    {
        cin>>b;
        list.push_back(make_tuple(0.0,a,b));
        cin>>a;
    }
    string order;
    while(cin>>order)
    {
        for(auto &p:list)
        {
            if(get<1>(p)==order)
            {
                get<0>(p)-=get<2>(p);
                break;
            }
        }
        if(cin.peek()=='\n')break;
    }
    sort(list.begin(),list.end());
    int chk=0;
    bool empty=true;

    for(auto &p:list)
    {
        if(get<0>(p)==0.0);

        else 
        {
            empty=false;
            if(++chk>3)break;

            else {
                cout<<get<1>(p) <<" "<<get<0>(p)*-1.0<<endl;
            }
        }
    }
    if(empty==true)cout<<"No Sales";
}