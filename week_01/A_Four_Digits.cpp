#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    for(int i=1;i<=4-n.size();i++)
    {
        cout<<'0';
    }
    cout<<n;
    return 0;
}