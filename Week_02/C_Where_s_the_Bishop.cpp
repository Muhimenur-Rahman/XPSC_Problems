#include<bits/stdc++.h>
using namespace std;
#define pii  pair<int, int>
vector<pii> dir = {{-1,-1},{-1,1},{1,-1},{1,1}};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char adj[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>adj[i][j];
            }
        }
        pii ans;
        for(int i=0;i<8;i++)
        {
            if(i==0 || i==7) continue;
            for(int j=0;j<8;j++)
            {
                if(j==0 || j==7) continue;
                if(adj[i][j] == '#')
                {
                    int count = 0;
                    for(pii d : dir)
                    {
                        int new_i = i+d.first;
                        int new_j = j+d.second;
                        if(adj[new_i][new_j]=='#')
                        {
                            count++;
                        }
                    }
                    if(count == 4)
                    {
                        ans.first = i;
                        ans.second = j;
                    }
                }
            }
        }
        cout<<ans.first+1<<" "<<ans.second+1<<endl;
    }
    return 0;
}