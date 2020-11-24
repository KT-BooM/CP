#include<bits/stdc++.h>
using namespace std;

string smallest(string s) {
    if (s.length() % 2 == 1) return s;
    
    string s1 = smallest(string(s.begin(), s.begin() + s.size() / 2));
    string s2 = smallest(string(s.begin() + s.size() / 2, s.end()));
    cout<<"s1 : " << s1 <<" s2 : "<< s2 << endl;
    if (s1 < s2) {
    	cout << s1+s2 << endl;
	return s1 + s2;}
	
    else{
    	cout << s2+s1 << endl;
	 return s2 + s1;
		}
	}
int main(){
	string a,b,ans;
	cin >> a >> b;
	
	ans = smallest(a);
	cout << ans;
	
	return 0;
}
