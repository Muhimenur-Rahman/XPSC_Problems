#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long m,s;
        cin>>m>>s;

        long long sum=0;

        int b[N] = {0};

        for(long long i=0;i<m;i++)
        {
            long long val;
            cin>>val;
            b[val]++;
        }

        bool flag = false;

        long long n=1;
        while(true){
            if(b[n] == 0) sum += n;
            if(sum > s) break;
            if(sum == s){
                flag = true;
                break;
            }
            n++;
        }   

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}