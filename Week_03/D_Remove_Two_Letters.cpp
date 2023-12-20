#include<bits/stdc++.h>
using namespace std;
string rev(string s)
{
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        getchar();
        string s;
        cin>>s;
        vector<string>ans;
        ans.push_back(s.substr(0,2));
        int j=1;
        while(j<n-1)
        {
            string sub = s.substr(j,2);
            if((ans.back()!=sub) && (rev(ans.back())!=sub))
            {
                ans.push_back(sub);
            }
            j++;
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}