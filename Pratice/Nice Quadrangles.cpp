#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1000000007;
const int MOD = 1000000007;


int parity(int a, int b){
	return (a^b)==3;
}

int good(int a, int b, int c, int d){
	return !((parity(a, b)+parity(b, c)+parity(c, d)+parity(d, a))&1);
}


int main()
{

  int t, n;
	scanf("%d", &t);
	while(t--){
		int types[4][4]={{0}};
		long long res=0;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			if(x==0 || y==0)
				continue;
			int typ, par;
			if(x>0 && y>0)
				typ=0;
			if(x>0 && y<0)
				typ=1;
			if(x<0 && y<0)
				typ=2;
			if(x<0 && y>0)
				typ=3;
			par=((x&1)<<1)|(y&1);
			types[typ][par]++;
		}
		for(int a=0; a<4; a++)
		for(int b=0; b<4; b++)
		for(int c=0; c<4; c++)
		for(int d=0; d<4; d++)
			if(good(a, b, c, d))
				res+=(long long)types[0][a]*types[1][b]*types[2][c]*types[3][d];
		printf("%lld\n", res);
	}

  return 0;
}
