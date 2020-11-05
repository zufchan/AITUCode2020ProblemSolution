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
	string s1,s2;
	int h1,m1,h2,m2, alpha;
	cin>>s1>>s2>>alpha;
	h1 = int(s1[0]-'0')*10 + int(s1[1]-'0');
	m1 = int(s1[3]-'0')*10 + int(s1[4]-'0');
	h2 = int(s2[0]-'0')*10 + int(s2[1]-'0');
	m2 = int(s2[3]-'0')*10 + int(s2[4]-'0');
	if(h1*60+m1>h2*60+m2){
		swap(h1,h2);
		swap(m1,m2);
	}
	int res = 0;
	for(int i = h1 ; i<=h2 ; i++){
		double tempt = i;
		double left,right;
		left = 0;
		right = 59.9999;
		
		if(tempt == h1) left = m1;
		if(tempt == h2) right = m2;
		tempt = tempt>=12? tempt-12:tempt;
		if(alpha == 0){
			double check = 60 * tempt / 11;
			if(left<=check && check<=right) res++;
		}
		if(alpha == 90){
			double check1 = 60 * (tempt - 3) / 11;
			if(left<=check1 && check1<=right) res++;
			double check2 = 60 * (tempt + 3) / 11;
			if(left<=check2 && check2<=right) res++;
			double check3 = 60 * (tempt - 9) / 11;
			if(left<=check3 && check3<=right) res++;
			double check4 = 60 * (tempt + 9) / 11;
			if(left<=check4 && check4<=right) res++;
		}
		if(alpha==180){
			double check1 = 60 * (tempt - 6)/11;
			if(left<=check1 && check1<=right) res++;
			double check2 = 60 * (tempt + 6)/11;
			if(left<=check2 && check2<=right) res++;
		}
		
	}
	cout<<res<<"\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t;
	while(t){
		solve();
		t--;
	}
	return 0;
}
