#include <bits/stdc++.h>

using namespace std;
const  int N = 300;
int x[N] , y[N];
int A = 0 , B = 0;
void check(int a , int b)
{
    if(a == b)return ;
    if(a == 0){
        if(b == 1 || b == 4)B ++;
        else A ++;
    }else if(a == 1){
        if(b == 0 || b == 3)A ++;
        else B ++;
    }else if(a == 2){
        if(b == 0 || b == 3)B ++;
        else A ++;
    }else if(a == 3){
        if(b == 2 || b == 4)A ++;
        else B ++;
    }else if(a == 4){
        if(b == 0 || b == 1)A ++;
        else B ++;
    }
}

int main()
{
    int n ,a , b;
    cin >> n >> a >> b;
    for(int i = 0 ; i < a ; i ++)cin >>x[i];
    for(int i = 0 ; i < b ; i ++)cin >>y[i];
    
    for(int i = 0 ; i < n ; i ++){
        check(x[i%a] , y[i%b]);
    }
    cout << A << " " << B;
    return 0;
}