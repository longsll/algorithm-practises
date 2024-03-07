#include <bits/stdc++.h>

const int N = 105;
int a[N];

bool check(std::string s){
    int n = s.size();
    char last = '2';
    for(int i = 0 ; i < n ; i ++){
        if(last == '2' || last != s[i]){
            last = s[i];
        }else{
            return false;
        }
    }
    return true;
}

void solve()
{
    int n , m;
    std::string s , t;    
    std::cin >> n >> m;
    std::cin >> s;
    std::cin >> t;
    int fi = t[0] , en = t[m - 1];
    if(check(s)){
        std::cout << "Yes\n";
        return ;
    }
    if(check(t)){
        char last = '2';
        for(int i = 0 ; i < n ; i ++){
            if(last == '2' || last != s[i]){
                last = s[i];
            }else{
                if(fi != s[i - 1] && en != s[i])continue;
                else{
                    std::cout << "No\n";
                    return ;
                }
            }            
        }
    }else{
        std::cout << "No\n";
        return ;
    }
    std::cout << "Yes\n";
}

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}