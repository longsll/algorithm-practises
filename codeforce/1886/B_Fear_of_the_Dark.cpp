#include <bits/stdc++.h>

using namespace std;

#define  x first
#define  y second


double dist(pair<double,double> a , pair<double , double> b){
    return sqrt(fabs(a.x-b.x)*fabs(a.x-b.x) + fabs(a.y-b.y)* fabs(a.y-b.y));
}

void solve()
{
    pair<double,double> start;
    pair<double,double> end;
    pair<double,double> a;
    pair<double,double> b;
    start.x = 0 , start.y = 0;
    cin >> end.x >> end.y;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    double sta = dist(start , a), stb = dist(start , b);
    double ena = dist(end , a), enb = dist(end , b);
    double d1 =  min(dist(start , a) , dist(start , b));
    double d2 =  min(dist(end , a) , dist(end , b));
    double d3 = dist(a , b) / 2.0;
    double ans;
    if(sta < stb && ena < enb){//A
        ans = max(sta , ena);
    }else if(stb < sta && enb < ena){//B
        ans = max(stb , enb);
    }else{
        ans = max(d1 , max(d2 , d3));
    }
    printf("%.10lf\n",ans);
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
}