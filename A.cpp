#include <bits/stdc++.h>
using namespace std;
 
string s, t;
int a[666666], b[666666];

int main () 
{ 
    while (cin >> s) 
    {
    	cin >> t;
    	for (int i = 0; i < int(s.size()); i ++) 
    	{
			a[s[i]] ++;
		}

		for (int i = 0; i < int(t.size()); i ++) {
			b[t[i]] ++;
		}


		string ans;
		for (int i = 'a'; i <= 'z'; i ++) 
		{
			for (int j = 1; j <= min (a[i], b[i]); j ++) 
			{
				ans += i;
			}
		}

		for (int i = 'a'; i <= 'z'; i ++) 
		{
			a[i] = b[i] = 0;
		}
		cout << ans << endl;
    }
	return 0;
}
