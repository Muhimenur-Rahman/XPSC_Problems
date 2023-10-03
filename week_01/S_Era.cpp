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
        vector<int>a(n);
        int steps=0;
        int index = 1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>index)
            {
                steps+=(a[i]-index);
                index = a[i]; 
            }
            index++;
        }
        cout<<steps<<endl;
    }
    return 0;
}