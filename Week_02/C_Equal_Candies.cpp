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
        vector<int> v(n);
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            mn = min(mn,v[i]);
        }
        int eated=0;
        for(int i=0;i<n;i++)
        {
            eated+=(v[i]-mn);
        }
        cout<<eated<<endl;
    }
    return 0;
}