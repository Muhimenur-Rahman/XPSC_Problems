#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool recursion(int a, int b, int s)
{
    if(s==0) return true;
    if(s<0) return false;
    if(dp[s]!=-1) return dp[s];
    bool op1 = false,op2 = false;
    if(s>=a) op1 = recursion(a,b,s-a);
    if(s>=b) op2 = recursion(a,b,s-b);
    return dp[s] = op1 || op2;
}
int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    for(int i=0;i<=s;i++)
    {
        dp[i] = -1;
    }
    if(recursion(a,b,s)) cout<<"Yes";
    else cout<<"No";
    return 0;
}