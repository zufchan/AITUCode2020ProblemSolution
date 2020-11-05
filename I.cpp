#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define f first
#define s second
#define all(s) s.begin(), s.end()
#define sz(a) (int)a.size()

const int mod = 1e9+7;


void solve(){
	int n; cin>>n;
    priority_queue<int, vector<int>, greater<int> > q;
	long long ans = 0;
	for(int i = 0 ; i < n ; i ++){
		int x;
		cin>>x;
		q.push(x);
		if(q.top()<x){
			ans+=x-q.top();
			q.pop();
			q.push(x);
		}
	}
	cout<<ans<<"\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

