#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int i,j,k,n,m,t,f[1005][1005][4];

const vector<pair<int,int> > d={{1,0},{0,1},{-1,0},{0,-1} };
string s[1005];

queue<tuple<int,int,int> > q;

void add(int x,int y,int z,int w){
	auto [dx,dy]=d[z];
	dx+=x; dy+=y;
	if(dx<1||dx>n||dy<1||dy>m||s[dx][dy]=='#'||f[dx][dy][z]!=-1)return;
	f[dx][dy][z]=w;
	q.push({dx,dy,z});
}
//分层图bfs
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		int x1,y1,x2,y2;
		for(i=1;i<=n;i++){
			cin>>s[i]; s[i]="$"+s[i];
			for(j=1;j<=m;j++){
				for(k=0;k<4;k++)f[i][j][k]=-1;
				if(s[i][j]=='S'){
					x1=i; y1=j;
				}
				if(s[i][j]=='T'){
					x2=i; y2=j;
				}
			}
		}
		q={};
		for(i=0;i<=3;i++){
			f[x1][y1][i]=0;
			q.push({x1,y1,i});
		}
		while(!q.empty()){
			auto [x,y,z]=q.front(); q.pop();
			int w=f[x][y][z];
			if(s[x][y]=='*'){
				for(i=0;i<=3;i++)if(i!=2){
					add(x,y,(z+i)%4,w+1);
				}
			}
			else add(x,y,z,w+1);
		}
		int res=1e9;
		for(i=0;i<=3;i++)if(f[x2][y2][i]!=-1)res=min(res,f[x2][y2][i]);
		if(res>1e8)res=-1;
		cout<<res<<'\n';
	}
}