#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 10;
string s[N+50];
int n , m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        s[i]=string(m,'0');
    }
    s[1][0]='a'; s[1][1]='b'; s[1][2]='b'; 
    s[2][0]='a'; s[2][1]='c'; s[2][2]='c'; 
    s[3][0]='b'; s[3][1]='c'; 
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='0')s[i][j]=rand()%26+'a';
        }
    }
    for(int i=1;i<=n;i++)cout<<s[i]<<'\n';
    return 0;
}