#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>dir = {{-1,-1},{-1,1},{1,-1},{1,1}};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int adj[n+1][m+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>adj[i][j];
            }
        }
        int sum[n+1][m+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
               int temp_sum = adj[i][j];
               for(pair<int,int> d : dir)
                {
                    int new_row = i;
                    int new_col = j;
                    while(new_row >=1&& new_row<=n && new_col >=1 && new_col<=m)
                    {
                        if (new_row != i || new_col != j)
                        {
                            temp_sum += adj[new_row][new_col];
                        }
                        new_row+=d.first;
                        new_col+=d.second;
                    }
                }
                sum[i][j] = temp_sum;
            }
        }
        int mx = INT_MIN;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                mx = max(mx,sum[i][j]);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}