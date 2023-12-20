#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        vector<int>v;
        int diff=0;
        int val=1;
        int size = 1;
        while(val<=n && size<=k)
        {
            v.push_back(val);
            diff++;
            val+=diff;
            size++;
        }
        for(int val : v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}