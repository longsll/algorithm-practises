#include <bits/stdc++.h>

using namespace std;
int a[105];
int main()
{
    int n;
    cin >> n;
    map<int,int>m;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
        m[a[i]] ++;
    }
    int x = 0 , f  = 0;
    for(int i = 1 ; i <= n ; i ++){
        if(m[a[i]] == 1)x ++;
        if(m[a[i]] > 2)f = a[i];
    }
    if((x % 2 != 0 )&&(f == 0)){
        printf("NO");
        return 0;
    }
    printf("YES\n");
    int t = 0 , tt = 0;
    for(int i = 1 ; i <= n ; i ++){
        if(x % 2 == 0){
            if(m[a[i]] >= 2)printf("A");
            else {
                if(t%2 == 0)printf("A");
                else{printf("B");}
                t ++;
            }    
        }else{
            if(a[i] != f){
                if(m[a[i]] >= 2)printf("A");
                else {
                    if(t%2 == 0)printf("A");
                    else{printf("B");}
                    t ++;
                } 
            }else{
                if(tt == 0){
                    printf("B");
                    tt = 1;
                }else{
                    printf("A");
                }
            }
        }
        
    }
    return 0;
}