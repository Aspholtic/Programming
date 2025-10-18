#include<iostream>
using namespace std;

long long Digits(long long a){

    if(a==0)return 0;
    if(a==1)return 1;

    int i=1;
    long long  sum=1;
    long long  power=10;
    while(a>=power)
    {
        sum+=i*9*power/10;
        power*=10;
        i++;
    }
    sum+=i*(a-power/10+1);

    return sum;
};

int main()
{
    long long a,b;

    cin>>a>>b;

    cout<<(Digits(b)-Digits(a-1));
}   