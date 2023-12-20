#include<bits/stdc++.h>
using namespace std;
long long min_val(vector<long long>&frq)
{
    long long mn = INT_MAX;
    for(long long i=0;i<frq.size();i++)
    {
        mn = min(mn,frq[i]);
    }
    return mn;
}
long long max_sum(vector<long long>&frq, string &s, long long &sum)
{
    long long min = min_val(frq);
    long long n = s.size();
    for(long long i=0;i<s.size();i++)
    {
        if(frq[i]==min)
        {
            long long left_d = i;
            long long right_d = n-i-1;
            {
                if(s[i] == 'L')
                {
                    if(right_d > left_d)
                    {
                        sum-=i;
                        sum+=n-i-1;
                        frq[i] = n-i-1;
                        s[i] = 'R';
                    }
                }
                else if(s[i]=='R')
                {
                    if(left_d > right_d)
                    {
                        sum-=n-i-1;
                        sum+=i;
                        frq[i] = i;
                        s[i] = 'L';
                    }
                }
            }
            break;
        }
    }
    return sum;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        getchar();
        string s;
        cin>>s;
        vector<long long>frq(n);
        for(long long i=0;i<n;i++)
        {
            if(s[i] == 'L') frq[i]=i;
            if(s[i] == 'R') frq[i]=n-i-1;
        }
        //for(long long val : frq) cout<<val<<" ";
        long long sum =0;
        for(long long i=1;i<=n;i++)
        {
            if(s[i-1]=='L')
            {
                sum+=(i-1);
            }
            if(s[i-1] == 'R')
            {
                sum+=n-i;
            }
        }
        for(long long i=0;i<n;i++)
        {
            sum = max_sum(frq,s,sum);
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}