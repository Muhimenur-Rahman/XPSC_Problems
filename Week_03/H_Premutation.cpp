#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> ar[n];
        map<int,int>mp;
        int mx = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                int val;
                cin>>val;
                ar[i].push_back(val);
            }
            mp[ar[i][0]]++;
        }
        int first_digit;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            mx = max(mx,it->second);

        }
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second >= mx)
            {
                first_digit = it->first;
                cout<<first_digit<<" ";
                break;
            }
        }
        bool flag = true;
        int uncommon;
        for(int i=0;i<n;i++)
        {
            auto it = find(ar[i].begin(),ar[i].end(),first_digit);
            if(it==ar[i].end())
            {
                uncommon = i;
                break;
            }
        }
        for(int val : ar[uncommon])
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}