#include <bits/stdc++.h>
using namespace std;
int k;
bool G[1010][1010];
void addEdge(int u, int v) {
	G[u][v] = G[v][u] = 1;
}
int main() {
	scanf("%d", &k);
	int used = 6;
    addEdge(1, 3); // 连从 1 到 3 的边
    addEdge(3, 4); addEdge(3, 5); // 建开始的两条边
	for (int i = 2, tmp = 2; tmp <= k; i++, tmp <<= 1) {
		addEdge(i * 3 + 1, i * 3 - 1); // 建 2^(i-1) 的方案数的点
		addEdge(i * 3 + 1, i * 3 - 2);
		addEdge(i * 3 + 2, i * 3 - 1);
		addEdge(i * 3 + 2, i * 3 - 2);
		addEdge(i * 3, i * 3 + 3); // 建额外链的点、边
		if (k & tmp) {
			addEdge(i * 3 + 3, i * 3 + 2); // 建从 2^(i-1) 汇方案数的边
		}
		used = i * 3 + 3;
	}
	if (k & 1) {
		addEdge(5, 6); // 特殊处理之前没有处理的情况
	}	
	addEdge(2, used); // 将路径数转移到 2
	printf("%d\n", used);
	for (int i = 1; i <= used; i++) {
		for (int j = 1; j <= used; j++) {
			printf(G[i][j] ? "Y" : "N");
		}
		printf("\n");
	}
	return 0;
}