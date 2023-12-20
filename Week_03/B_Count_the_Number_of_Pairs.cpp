#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        getchar();
        string s;
        cin>>s;
        int fr_l[26]={0};
        int fr_u[26]={0};
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z') fr_l[(s[i]-'a')]++;
            if(s[i]>='A' && s[i]<='Z') fr_u[(s[i]-'A')]++;
        }
        int count = 0;
        int extra = 0;
        for(int i=0;i<26;i++)
        {
            count+=min(fr_l[i],fr_u[i]);
            if(abs(fr_l[i]-fr_u[i]) >= 2)
            {
                extra += (abs(fr_l[i]-fr_u[i]))/2;
            }
        }
        if(extra > k)
        {
            count+=k;
        }
        else count+=extra;
        cout<<count<<endl;
    }
    return 0;
}