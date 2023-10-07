#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>a(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int main_sum = (n*(n+1))/2;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<main_sum-sum;
    return 0;
}