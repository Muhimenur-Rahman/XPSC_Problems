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
        getchar();
        string s;
        cin>>s;
        map<string,int>mp;
        int j=0;
        int count = 0;
        while(j<n-1)
        {
            string sub;
            sub = s.substr(j,2);
            if(mp[sub]==0)
            {
                count++;
            }
            mp[sub]++;
            j++;
        }
        cout<<count<<endl;
    }
    return 0;
}