#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {

        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        int s=0;
        for(int p=i;p<=j;p++)
        {
            s+=v[p];
        }
        cout<<s<<endl;
    }
    return 0;
}