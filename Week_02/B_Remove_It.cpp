#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    v.erase(remove(v.begin(),v.end(),x),v.end());
    if(!v.empty())
    {
        for(int val:v) cout<<val<<" ";
    }
    return 0;
}