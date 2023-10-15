#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,s;
    cin>>k>>s;
    long long int  cnt=0;
    for(long long int  x=0;x<=k;x++)
    {
        for(long long int  y=0;y<=k;y++)
        {
            if (s-x-y>=0 && s-x-y<=k) cnt++; 
        }
    }
    cout<<cnt;
    return 0;
}