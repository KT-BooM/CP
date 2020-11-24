#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,t,taxi=0;
	int a[5] = {0};
	cin >> n;
	while(n--){
		cin >> t;
		a[t]++; 
	}
	if(a[1]==a[3]){
		taxi += a[1];
		a[1] = 0;
		a[3] = 0;
	}
//	else{
//		taxi += a[1]/4;
//		a[1] = a[1]%4;	
//	}
	if(a[3] >= a[1]){
		taxi += a[1];
		a[3] -= a[1];
		a[1] = 0;
	}
	else{
		taxi += a[3];
		a[1] -= a[3];
		a[3] = 0;
	}
	if(a[1]%2==0)
		t = a[1]/2;
	else
		t = a[1]/2+1;
	if(t <= a[2]){
		taxi += t;
		a[1] = 0;
		a[2] -= t;
	}
	else{
		taxi += a[2];
		a[1] -= a[2]*2;
		a[2] = 0;
	}
	if(a[2]%2==0){
		taxi += a[2]/2;
		a[2] = 0;
	}
	else{
		taxi += a[2]/2;
		a[2] = 1;
	}
	if(a[1]%4==0){
		taxi += a[1]/4;
		a[1] = 0;
	}
	else{
		taxi += a[1]/4+1;
		a[1] = 0;
	}
	taxi += a[4]+a[3]+a[2]+a[1];
	cout << taxi << endl;
	
	
	
	return 0;
}
