#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<int,int>mp;
    for(int val:v)
    {
        for(int i=2;i<=val;i++)
        {
            if(val%i==0) mp[i]++;
        }
    }
    for(auto it = mp.begin(),mp.end();it++)
    {
        
    }
    return 0;
}