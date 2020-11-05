#include<bits/stdc++.h>
using namespace std;
const int maxn = 200001;
double c[maxn];
int x[maxn], y[maxn], w[maxn];

long double res[2];

int main(){
	int n, m; cin>>n>>m;
	for(int i = 0 ; i < 2*n ; i ++){
		cin>>c[i];
	}
	for(int i = 0 ; i < m ; i++){
		cin>>x[i]>>y[i]>>w[i];
		c[x[i]-1]+=(double)w[i]/2;
		c[y[i]-1]+=(double)w[i]/2;
	}
	sort(c, c+2*n);
	for(int i = 0 ; i < 2*n ; i++){
		res[i%2]+=c[i];
	}
	cout<<abs(res[1]-res[0]);
	return 0;
}
