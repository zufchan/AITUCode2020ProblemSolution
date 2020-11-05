#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	
	while(t){
		
		double m; cin>>m;
		double lf = floor(m);
		m= m-lf;
		if(m==0){
			cout<<1<<endl;
			t--;
			continue;	
		}
		int answer;
		for(int i =2; i<=10000; ++i){
			if(abs(i*m-round(i*m))<0.00005){
				answer = i;
				break;
			}
		}
		cout<<answer<<endl;
		t--;
	}
}
