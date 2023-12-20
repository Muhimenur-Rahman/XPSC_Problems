#include<bits/stdc++.h>
using namespace std;
class tripple
{
    public:
    int a;
    int b;
    int i;
    tripple(int a, int b, int i)
    {
        this->a = a;
        this->b = b;
        this->i = i;
    }

};
class compare
{
  public: 
    bool operator()(tripple &a, tripple &b)
    {
        if(a.i > b.i) return true;
        else return false;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a_in;
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            a_in.push_back({val,i});
        }
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            b.push_back(val);
        }
        sort(a_in.begin(),a_in.end());
        sort(b.begin(),b.end());
        priority_queue<tripple,vector<tripple>,compare> pq;
        for(int i=0;i<n;i++)
        {
           pq.push(tripple(a_in[i].first,b[i],a_in[i].second));
        }
        while(!pq.empty())
        {
            cout<<pq.top().b<<" ";
            pq.pop();
        }
        cout<<endl;
    }
    return 0;
}