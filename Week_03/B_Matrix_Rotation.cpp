#include<bits/stdc++.h>
using namespace std;
bool is_beautiful(int mat[2][2])
{
    for(int i=0;i<2;i++)
    {
        if(mat[i][0] > mat[i][1]) return false;
        if(mat[0][i] > mat[1][i]) return false;
    }
    return true;
}
void rotate_matrix(int mat[2][2])
{
    int new_mat[2][2];
    new_mat[0][0] = mat[1][0];
    new_mat[0][1] = mat[0][0];
    new_mat[1][0] = mat[1][1];
    new_mat[1][1] = mat[0][1];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            mat[i][j] = new_mat[i][j];
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int mat[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>mat[i][j];
            }
        }
        bool flag = false;
        for(int i=1;i<=4;i++)
        {
            if(is_beautiful(mat))
            {
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
            else
            {
                rotate_matrix(mat);
            }
        }
        if(flag == false) cout<<"NO"<<endl;
    }
    return 0;
}