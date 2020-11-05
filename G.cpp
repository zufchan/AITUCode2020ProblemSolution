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

int main(){
	int n,k;
	cin>>n>>k;
	while(n!=-1, k!=-1){
		double a,b;
		a = min(n,k);
		b = max(n,k);
		if((a==b || b==a+1) && a!=0){
			cout<<1<<"\n";
			cin>>n>>k;
			continue;
			
		}
		if(a==1 && b!=1){
			cout<<ceil((double)b/2)<<"\n";
			cin>>n>>k;
			continue;
		}
		if(a==0){
			cout<<(int)b<<"\n";
			cin>>n>>k;
			continue;
		}
		
		cout<<ceil((double)b/(a+1))<<"\n";
		
		cin>>n>>k;
		
	}

	return 0;
}
