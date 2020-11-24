#include<iostream>
using namespace std;
int main(){
	int q,a,b,n;
	long long s;
	cin >> q;
	string ans[q];
	for(int i=0;i<q;i++){
		ans[i] = "No";
		cin >> a;cin >> b,cin >> n,cin >> s;
		if(s/a-a*n<b)
			ans[i] = "Yes";
			
	}
	for(int i=0;i<q;i++){
		cout << ans[i] << endl;
	}
}
