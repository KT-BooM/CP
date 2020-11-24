#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m;
	cin >> n;cin >> m;
	long long a[n],b[m],ans[m];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	for(int i=0;i<m;i++){
		ans[i] = 0;
		for(int j=0;j<n;j++){
			if(b[i]>=a[j])
				ans[i]++;
		}
	}
	for(int i=0;i<m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
