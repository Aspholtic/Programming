#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

set<int> split(string line,char d)
{
    set<int> out;
    line+=d;
    string token;

    for(auto c: line)
    {
        if(c==d)
        {
            if(token.length()>0)
            {
                out.insert(stoi(token));
                token="";
            }
        }
        else token+=c;
    }
    return out;
}
void print(set<int> s)
{
    if(s.empty())
    {
        cout<<"empty set"<<endl;
    }
    else
        for(auto e:s)
        {
            cout<<e<<" ";
        }
    cout<<endl;
}
int main()
{
    string line;
    getline(cin,line);
    set<int> U= split(line,' '),I,D;
    
    I=D=U;

    while(getline(cin,line))
    {
        set<int> s=split(line,' ');

        for(auto e:s)
        {
            U.insert(e);
        }
        for(auto itr=I.begin();itr!=I.end();)
        {
            if(s.find(*itr)==s.end())
            {
                itr = I.erase(itr);
            }
            else 
                ++itr;
        }
        for(auto e:s)
        {
            if(D.find(e)!=D.end())
            {
                D.erase(e);
            }
        }
    }
    cout<<"U: ";print(U);
    cout<<"I: ";print(I);
    cout<<"D: ";print(D);
}