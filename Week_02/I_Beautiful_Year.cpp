#include<bits/stdc++.h>
using namespace std;
bool uniq(int n)
{
    string s = to_string(n);
    for(int i=0;i<s.size()-1;i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j]) return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;i<=90000;i++)
    {
        if(uniq(i)==true)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}