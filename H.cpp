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
	
}
int a[10001];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; cin>>n;
	ll ans = 0;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
		ans+=a[i];
	}
	cout<<ans-n<<"\n";
	return 0;
}
