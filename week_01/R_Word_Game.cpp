#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<string,int> mp;
        vector<string>a[4];
        int n;
        cin>>n;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=n;j++)
            {
                string s;
                cin>>s;
                mp[s]++;
                a[i].push_back(s);
            }
        }
        int count[4]={0};
        for(int i=1;i<=3;i++)
        {
            for(string ans : a[i])
            {
                if(mp[ans]==1) count[i] = count[i]+3;
                if(mp[ans]==2) count[i]++;
            }
        }
        for(int i=1;i<=3;i++)
        {
            cout<<count[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}