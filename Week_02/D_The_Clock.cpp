#include<bits/stdc++.h>
using namespace std;
bool check_pallindrome(string &s)
{
    for(int i=0;i<=1;i++)
    {
        if(s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}
string new_clock(string &s,int min)
{
    int hour = stoi(s.substr(0,2));
    int mn = stoi(s.substr(3,2));
    int total_min = hour*60+mn+min;
    int new_hour = (total_min/60)%24;
    int new_min = total_min%60;
    string new_time = "";
    if(new_hour<10)
    {
        new_time+='0';
    }
    new_time+=to_string(new_hour);
    new_time+=':';
    if(new_min<10)
    {
        new_time+='0';
    }
    new_time+=to_string(new_min);
    return new_time;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string clock;
        cin>>clock;
        string s;
        int min;
        cin>>min;
        s = new_clock(clock,min);
        int cnt=0;
        while(s!=clock)
        {
            if(check_pallindrome(s)) cnt++;
            s = new_clock(s,min);
        }
        if(check_pallindrome(s)) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}