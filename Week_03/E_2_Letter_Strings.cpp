#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ar[11][11]={0};
        long long count = 0;
        for(long long i=1;i<=n;i++)
        {
            char a,b;
            cin>>a>>b;
            ar[a-'a'][b-'a']++;
            for(long long j=0;j<11;j++)
            {
                if((ar[a-'a'][j])>0 && j!=b-'a')
                {
                    count += ar[a-'a'][j];
                }
                if((ar[j][b-'a'])>0 && j!=a-'a')
                {
                    count += ar[j][b-'a'];
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}