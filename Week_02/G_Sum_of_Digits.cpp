#include<bits/stdc++.h>
using namespace std;
int digit_sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        int digits = n%10;
        sum+=digits;
        n=n/10;
    }
    return sum;

}
int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
    }int count;
    if(s.size()==1) count=0;
    else count = 1;
    while(sum>9)
    {
        sum = digit_sum(sum);
        count++; 
    }
    cout<<count;
    return 0;
}