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
        char s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int count[26] = {0};
        for(int i=0;i<n;i++)
        {
            int val = s[i]-'A';
            if(count[val] == 0)
            {
                count[val] = count[val]+2; 
            }
            else
            {
                count[val]++;
            }
        }
        int sum = 0;
        for(int i=0;i<26;i++)
        {
            sum+=count[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}