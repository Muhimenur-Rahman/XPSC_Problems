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
        getchar();
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if((s[i]>='A') && (s[i]<='Z'))
            {
                s[i] = tolower(s[i]);
            }
        }
        string cat = "meow";
        string ans;
        for(int i=0;i<n-1;i++)
        {
            if(s[i] == s[i+1]) continue;
            ans.push_back(s[i]);
        }
        ans.push_back(s[s.size()-1]);
        if(ans == cat) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}