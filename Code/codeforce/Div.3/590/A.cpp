#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n;
	while(n--){
		cin >> k;
		long long sum = 0;
		long long temp;
		for(int i = 0;i<k;++i){
			cin >> temp;
			sum+=temp;
		}
		if(sum%k!=0)
			cout << sum/k+1<< endl;
		else
			cout << sum/k << endl;
		
	}
	return 0;
}
