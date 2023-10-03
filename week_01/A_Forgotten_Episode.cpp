#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int main_sum = (n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<main_sum-sum;
    return 0;
}