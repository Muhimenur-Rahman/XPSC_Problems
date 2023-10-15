#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v(4);
        for(int i=0;i<4;i++) cin>>v[i];
        int val = v[0];
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<4;i++)
        {
            if(v[i]==val)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}