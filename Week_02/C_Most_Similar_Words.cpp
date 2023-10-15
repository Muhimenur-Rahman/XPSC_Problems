#include<bits/stdc++.h>
using namespace std;
int min_dist(string &a, string &b)
{
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[i]) continue;
        else
        {
            count+=abs(a[i]-b[i]);
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sz;
        cin>>n>>sz;
        getchar();
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            getline(cin,v[i]);
        }
        int mn = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                mn = min(mn,min_dist(v[i],v[j]));
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}