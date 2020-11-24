#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q,p;
	char c;
	vector<int> ans;
	cin >> n;
	while(n--){
		cin >> q;
		while(q--){
			cin >> c;
			if(c=='a'){
				cin >> p;
				ans.push_back(p);	
			}
			else if(c=='b'){
				sort(ans.begin(),ans.end());
			}
			else if(c=='c'){
				reverse(ans.begin(),ans.end());	
			}
			else if(c=='d'){
				cout << ans.size() << endl;;
			}
			else if(c=='e'){
				for(auto i : ans){
					cout << i << " ";
				}
				cout << endl;
			}
			else{
				sort(ans.begin(),ans.end(),greater<int>());
			}
		}
	}
	return 0;
}
