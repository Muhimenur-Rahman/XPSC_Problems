#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin >> n;
    int a[n+1];
    int count[n+1];
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        count[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        int val = a[i];
        count[val]++;
    }
    bool flag =false;
    for(int i=1;i<=n;i++)
    {
        if(count[i]>=3)
        {
            cout<<i<<endl;
            flag = true;
            break;
        }
    }
    if(!flag) cout<<-1<<endl;
    }
    return 0;
}
