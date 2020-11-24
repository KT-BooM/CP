#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a ;
	cin >> b ;
	c = a-b*2;
	
	cout << (c > 0 ? c : 0);
	
	return 0;
}
