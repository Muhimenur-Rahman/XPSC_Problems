#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] != b[i]) count++;
    }
    cout<<count<<endl;
    return 0;
}