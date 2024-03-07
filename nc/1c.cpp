#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll res=0;
string a;
vector<int> s1,s0;
int main()
{
    cin>>a;
    int num1=0,num0=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1') 
        {
            num1++;
            s1.push_back(i+1);
        }
        else 
        {
            num0++;
            s0.push_back(i+1);
        }
    }
    if(num1>num0)
    {
        for(int i=1,j=0;i<=a.size();i+=2,j++)
        {
            res+=abs(s1[j]-i);
        }
    }
    else if(num1<num0)
    {
        for(int i=1,j=0;i<=a.size();i+=2,j++)
        {
            res+=abs(s0[j]-i);
        }
    }
    else
    {
        ll res1=0;
        for(int i=1,j=0;i<=a.size();i+=2,j++)
        {
            res1+=abs(s1[j]-i);
        }
        for(int i=1,j=0;i<=a.size();i+=2,j++)
        {
            res+=abs(s0[j]-i);
        }
        res=min(res,res1);
    }
    cout<<res;
    return 0;
}