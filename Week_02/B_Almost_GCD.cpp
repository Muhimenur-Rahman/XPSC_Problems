#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>mp;
    for(int val : a)
    {
        for(int i=2;i<=val;i++)
        {
            if(val%i==0)
            {
                if (mp.find(i) != mp.end()) 
                {
                    mp[i]++;
                }
                 else 
                {
                    mp[i] = 1;
                }
            }
        }
    }
    int mx = INT_MIN;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        mx = max(it->second,mx);
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>=mx)
        {
            cout<<it->first<<endl;
            break;
        }
    }
    return 0;
}