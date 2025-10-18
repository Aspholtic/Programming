#include<map>
#include<vector>
#include<iostream>
#include<algorithm>

string split(string m)
{
    for(int i=0;i<m.size();i++)
    {
        if()
    }
}

using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string,vector<string>> songs;

    for(int i=0;i<n;i++)
    {
        string line;
        getline(cin,line);

        int find = line.find(',');

        string a = line.substr(0,find);
        string b = line.substr(find+2);

        songs[a].push_back(b);
    }

    
}