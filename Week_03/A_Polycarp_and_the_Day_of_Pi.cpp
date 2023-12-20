#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string pi = "314159265358979323846264338327";
    while(t--)
    {
        string s;
        cin>>s;
        int count = 0;
        for(int i=0;i<30;i++)
        {
            if(s[i]!=pi[i]) break;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}