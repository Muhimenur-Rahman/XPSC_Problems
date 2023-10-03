#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count[26]={0};
    for(int i=0;i<s.size();i++)
    {
        int val = s[i]-'a';
        count[val]++;
    }
    bool flag = true;
    for(int i=0;i<26;i++)
    {
        if(count[i]==0)
        {
            flag = false;
            cout<<char((i+'a'));
            break;
        }
    }
    if(flag) cout<<"None";
    return 0;
}