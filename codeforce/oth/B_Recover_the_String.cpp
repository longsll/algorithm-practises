#include<bits/stdc++.h>
using namespace std;
int n,m,A,B,C,D;
int main(){
	scanf("%d%d%d%d",&A,&B,&C,&D);
	n=sqrt(A<<1)+1,m=sqrt(D<<1)+1;
	(n<m?n:m)-=(!B&&!C);
	if(n*(n-1)!=A+A||m*(m-1)!=D+D||n*m!=B+C)return puts("Impossible"),0;
	for(int i=n+m;i;i--)
	if(B>=m)putchar('0'),B-=m;
	else putchar('1'),m--;
	return 0;
}