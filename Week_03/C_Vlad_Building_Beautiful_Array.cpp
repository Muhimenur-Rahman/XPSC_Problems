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
        vector<int> v;
        int even_count=0;
        int odd_count=0;
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            v.push_back(val); 
            if(val%2 == 0) even_count++; 
            if(val%2 != 0) odd_count++;
            mn = min(mn,val);
        }
        if((mn%2 != 0) || (odd_count == 0))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}