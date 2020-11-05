#include<bits/stdc++.h>
using namespace std;
double a[1000001];
int main(){
  int t;
  scanf("%i", &t);
  a[0] = 1;
  for(int i = 1; i<1000001; i++){
    a[i]= (double)1/(i+1) + a[i-1];
  }
  for(int i = 1; i<1000001; i++){
    a[i]*=i+1;
  }
  while(t){
    
    int n;
    scanf("%i", &n);
    printf("%.6f\n", a[n-1]);
    t--;
  }
}
