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
        set<int>st;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            st.insert(val);
        }
        if(n%2==0)
        {
            if(st.size()%2 != 0) cout<<st.size()-1<<endl;
            else cout<<st.size()<<endl;
        }
        else
        {
            if(st.size()%2==0) cout<<st.size()-1<<endl;
            else cout<<st.size()<<endl;
        }
    }
    return 0;
}