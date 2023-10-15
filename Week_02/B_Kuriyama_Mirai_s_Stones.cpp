#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int> a(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long int> b(a);
    sort(b.begin(),b.end());
    vector<long long int>sum_a(n);
    vector<long long int>sum_b(n);
    sum_a[0] = a[0];
    sum_b[0] = b[0];
    for(long long int i=1;i<n;i++)
    {
        sum_a[i] = a[i]+sum_a[i-1];
        sum_b[i] = b[i]+sum_b[i-1];
    }
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int m,l,r;
        cin>>m>>l>>r;
        l--;
        r--;
        if(m==1) 
        {
            if(l>0) cout<<sum_a[r]-sum_a[l-1]<<endl;
            else cout<<sum_a[r]<<endl;
        }
        if(m==2)
        {
            if(l>0) cout<<sum_b[r]-sum_b[l-1]<<endl;
            else cout<<sum_b[r]<<endl;
        }
    }
    return 0;
}