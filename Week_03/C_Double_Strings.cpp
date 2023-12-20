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
        vector<string>v(n);
        map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        vector<int> result(n,0);
        for(int i=0;i<n;i++)
        {
            string s = v[i];
            for(int j=1;j<s.size();j++)
            {
                string prefix = s.substr(0,j);
                string suffix = s.substr(j,s.size()-1);
                if(mp.count(prefix) && mp.count(suffix)) 
                {
                    result[i]=1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<result[i];
        }
        cout<<endl;   
    }
    return 0;
}