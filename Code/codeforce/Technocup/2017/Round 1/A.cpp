#include<iostream>
#include<vector>
using namespace std;

int trans(long long a,long long b,int t,vector<long long> &ans){
	if(a==b){
		t++;
		ans.push_back(a);
	}
	if(a < b&&a*2<=b&&t==0){
		t = trans(a*2,b,t,ans);
		if(t!=0)
			ans.push_back(a);
	}
	if(a<b&&a*10+1<=b&&t==0){
		t = trans(a*10+1,b,t,ans);
		if(t!=0)
		ans.push_back(a);
	}
	return t;	
}
int main(){
	vector<long long> ans;
	long long a,b;
	cin >> a >> b;
	int t=0;
	int sum =trans(a,b,t,ans);
	if(sum){
		cout << "YES" << endl;
		cout << ans.size() << endl;
		for(int i = ans.size()-1;i>0;i--){
			cout << ans[i] << " ";
		}
		cout << b;
	}
	else
		cout << "NO" << endl;
	return 0;
}
