#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            int moves;
            cin>>moves;
            string s;
            cin>>s;
            int val = a[i];
            for(int i=0;i<moves;i++)
            {
                if(s[i]=='D')
                {
                    if(val==9) val=0;
                    else val++;
                }
                if(s[i]=='U')
                {
                    if(val==0) val=9;
                    else val--;
                }
            }
            a[i] = val;
        }
        for( int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}