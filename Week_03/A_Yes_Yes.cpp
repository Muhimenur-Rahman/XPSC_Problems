#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool flag = true;
        if(s.size()==1 && (s[0] != 'Y') && (s[0] != 'e') && (s[0] != 's'))
        {
            flag = false;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if((s[i] != 'Y') && (s[i] != 'e') && (s[i] != 's'))
            {
                flag = false;
            }
            else
            {
                if(s[i]=='Y' && s[i+1] != 'e')
                {
                    flag = false;
                }
                if(s[i]=='e' && s[i+1] != 's')
                {
                    flag = false;
                }
                if(s[i]=='s' && s[i+1] != 'Y')
                {
                    flag = false;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}