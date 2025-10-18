#include<bits/stdc++.h>
using namespace std;

int G(int x, int y) { // Greater Common Divisor

    if(y==0)return x;

    return G(y,x%y);
}
int J(int n, int k) { // Josephus Problem

    if(n==1)return 0;
    return (J(n-1,k)+k)%n;

}

map<pair<int,int>, int> memoA;

int A(int m, int n) { // Ackermann Number
    pair<int,int> key={m,n};

    if(memoA.find(key)!=memoA.end())return memoA[key];

    int result;

    if(m>0&&n==0)
    {
        result = A(m-1,1);
    }
    if(m>0&&n>0)
    {
        result = A(m-1,A(m,n-1));
    }
    if(m==0)
    {
        result = n+1;
    }
    return result;
}

map<pair<int,int>, int> memoD;

int D(int m, int n) { // Delannoy number

    pair<int,int> key2={m,n};

    if(memoD.find(key2)!=memoD.end())return memoD[key2];

    int result;

    if(n==0||m==0)return 1;

    result = D(m-1,n)+D(m-1,n-1)+D(m,n-1);

    return result;
}
int main() {
    map<string, int(*)(int,int)> func = {{"G",G}, {"J",J}, {"A",A}, {"D",D}};
    string fn;
    int p1, p2;
    while (cin >> fn >> p1 >> p2) {
    if (func.find(fn) != func.end())
    cout << fn << '(' << p1 << ',' << p2 << ") = " << func[fn](p1,p2) << endl;
    }
    return 0;
}