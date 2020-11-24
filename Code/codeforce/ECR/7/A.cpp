#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m,c=0,tmp,t;
	cin >> n;
	
	for(ll i = 1; i <= n; i++){
		tmp = i*(i+1)/2;
		if(tmp >= n){
			t = (i-1)*i/2;
			break;
		}
	}
	
	for(ll i = t; i < n; i++){
		c++;
	}
	cout << c;
	
	
	
	
	
	return 0;
}
