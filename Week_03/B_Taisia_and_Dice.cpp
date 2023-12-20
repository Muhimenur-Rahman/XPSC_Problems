#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        vector<int> v(n,1);
        int remain_sum = s-n;
        for(int i=0;i<n;i++)
        {
            while(v[i]<(s-r) && remain_sum>0)
            {
                v[i]++;
                remain_sum--;
            }
        }
        for(int val : v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}