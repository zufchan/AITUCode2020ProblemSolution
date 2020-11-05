#include<bits/stdc++.h>
using namespace std;
map<int,int> A,B;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
void primeFactors(int x, int index)  
{  
    for(int i = 2; i * i <= x; ++i){
        while(x % i == 0){
            if(index == 1){
                A[i]++;
            } else{
                B[i]++;
            }
            x /= i;
        }
    }
    if(x > 1){
        if(index == 1){
            A[x]++;
        } else{
            B[x]++;
        }
    }
}  
int main(){	
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
	int t;
	cin>>t;
	while(t){
		A.clear(); B.clear();
		int m,n;
		cin>>m>>n;
		primeFactors(m,1);
		primeFactors(n,2);
		long long a = 1;
		for(map<int,int>::iterator it = A.begin(); it != A.end(); ++it) {
			if(A[it->first] > B[it->first]){
				a*=binpow(it->first, it->second);
			}
		}
		for(map<int,int>::iterator it = B.begin(); it != B.end(); ++it) {
			if(B[it->first] > A[it->first]){
				a*=binpow(it->first, it->second);
			}
		}
		cout<<a<<"\n";
		t--;
	}
	
	return 0;
}
