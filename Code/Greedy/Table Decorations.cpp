#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll a[3];
	for(int i=0;i<3;i++){
		cin >> a[i];
	}
	sort(a,a+3);
	if((a[0]+a[1])*2<=a[2])
		a[2] = (a[0]+a[1])*2;
	ll sum = a[0]+a[1]+a[2];
	cout << sum/3;
	return 0;
}
