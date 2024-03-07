#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 10;
int a[N];
// 两个 multiset 维护滑动窗口中的前 K 小值
struct Magic {
    int K;
    // st1 保存前 K 小值，st2 保存其它值
    multiset<long long> st1, st2;
    // sm 表示 st1 中所有数的和
    long long sm;

    Magic(int K): K(K), sm(0) {}

    // 调整 st1 和 st2 的大小，保证调整后 st1 保存前 K 小值
    void adjust() {
        while (st1.size() < K && st2.size() > 0) {
            long long t = *(st2.begin());
            st1.insert(t);
            sm += t;
            st2.erase(st2.begin());
        }
        while (st1.size() > K) {
            long long t = *prev(st1.end());
            st2.insert(t);
            st1.erase(prev(st1.end()));
            sm -= t;
        }
    }

    // 插入元素 x
    void add(long long x) {
        if (!st2.empty() && x >= *(st2.begin())) st2.insert(x);
        else st1.insert(x), sm += x;
        adjust();
    }

    // 删除元素 x
    void del(long long x) {
        auto it = st1.find(x);
        if (it != st1.end()) st1.erase(it), sm -= x;
        else st2.erase(st2.find(x));
        adjust();
    }
};

int main()
{
    int n;
    cin >> n;
    Magic magic((n - 1) / 2);
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        magic.add(a[i]);
    }
    vector<double> ans;
    magic.del(a[0]);
    if((n - 1)  % 2 == 0)ans.push_back(((double)*prev(magic.st1.end()) + *magic.st2.begin()) / 2);
    else ans.push_back((double)*magic.st2.begin());
    for(int i = 1 ; i < n ; i ++){
        magic.add(a[i - 1]);
        magic.del(a[i]);
        if((n - 1)  % 2 == 0)ans.push_back(((double)*prev(magic.st1.end()) + *magic.st2.begin()) / 2);
        else ans.push_back((double)*magic.st2.begin());
    }
    for(auto x : ans){
        printf("%.1lf\n" , x);
    }
    return 0;
}