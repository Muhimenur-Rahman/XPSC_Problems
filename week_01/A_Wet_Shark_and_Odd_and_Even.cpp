#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int mn_odd = INT_MAX;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]%2!=0)
        {
            mn_odd = min(mn_odd,a[i]);
        }
    }
    if(sum%2==0) cout<<sum;
    else cout<<sum-mn_odd;
    return 0;
}