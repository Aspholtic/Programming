#include<map>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    string n,n2;
    map<string,vector<string>> cartoon;
    vector<string> type;

    while(cin>>n>>n2){
        
         if(cartoon.find(n2)==cartoon.end())
        {
            cartoon[n2] = {}; 
            type.push_back(n2);
        }
        cartoon[n2].push_back(n);

    };
    for(auto p:type)
    {
        cout<<p<<": ";

        for(auto n3:cartoon[p])
        {
            cout<<n3<<" ";
        }
        cout<<endl;
    }
}