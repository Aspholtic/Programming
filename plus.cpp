#include<bits/stdc++.h>
using namespace std;

//999990
//000500

string add(string a,string b)
{
    if(a.size()<b.size())swap(a,b);

    if (b.size() < a.size()) b = string(a.size() - b.size(), '0') + b;

    string result ="";
    int c=0;

    for(int i=a.size()-1;i>=0;--i)
    {
        int e = (a[i]-'0')+(b[i]-'0')+c;

        result += (char)(e%10+'0');

        c=e/10;
    }
    if(c>0) result = (char)(c+'0')+ result;

    return result;
};

int main()
{
    string n;
    string total="0";

    while(cin>>n)
    {
        if(n=="END")break;
        total = add(total,n);
    }
    cout<<total;
}