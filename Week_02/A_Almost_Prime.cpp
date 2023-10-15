#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    vector<int>divisros;
    int count=0;
    for(int j=1;j<=n;j++)
    {
        for(int i=2;i<=n;i++)
        {
            if((j%i == 0) && is_prime(i)) divisros.push_back(i);
        }
        if(divisros.size()==2) count++;
        divisros.clear();
    }
    cout<<count;
    return 0;
}