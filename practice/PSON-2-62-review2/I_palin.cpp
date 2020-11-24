#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s,s2;
	cin >> s;
	s2 = s;
	reverse(s.begin(),s.end());
	if(s == s2)
		cout << "Your string is a palindrome";
	else
		cout << "Your string is not a palindrome";
	
	
	
	
	return 0;
}
