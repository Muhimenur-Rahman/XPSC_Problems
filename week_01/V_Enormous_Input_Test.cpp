#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int cnt=0;
    while(n--)
    {
        long long int val;
        cin>>val;
        if(val%k==0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}