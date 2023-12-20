#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        priority_queue<long long>pq;
        long long army = 0;
        for(long long i=1;i<=n;i++)
        {
            long long val;
            cin>>val;
            if(val!=0) pq.push(val);
            else
            {
                if(!pq.empty())
                {
                    army+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<army<<endl;
    }
    return 0;
}