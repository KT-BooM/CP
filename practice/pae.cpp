#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double a[10],tmp,tmp2;
	vector<double> ans;
	for(int i = 0;i < 10;i++){
		cin >> a[i];
	}
	for(int i = 0;i < 10;i++){
		tmp = a[i]*2;
		tmp2 = a[i]*3;
		bool two = false;
		ans.erase(ans.begin()+3);
		cout << tmp  << " : "<<tmp*0.1<<endl;
		cout << tmp2 << " : " << tmp2*0.1<<endl;
		ans.push_back(a[i]);
		
		for(int j = 1;j < 10;j++){
			if(tmp-tmp*0.1 <= a[j] && a[j]<= tmp+tmp*0.1){
				two = true;
				ans.push_back(a[j]);
			}
			else if(two && tmp2-tmp2*0.1 <= a[j]&&a[j] <= tmp2+tmp2*0.1)
				ans.push_back(a[j]);
		}
	}
	for(int i = 0;i < 3;i++ ){
		cout << ans[i] << " ";
	}
	
	
	
	return 0;
}
