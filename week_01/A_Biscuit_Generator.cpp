#include<bits/stdc++.h>
using namespace std;
int main()
{
    float b_time,b,totalT;
    cin>>b_time>>b>>totalT;
    float per_b = b_time;
    int count = 0;
    while(b_time<=(totalT+0.5))
    {
        count++;
        b_time = b_time+per_b;
    }
    cout<<b*count;
    return 0;
}