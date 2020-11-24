#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b;
	cin >> a,cin >> b;
	if(a>9||b>9)
		cout << -1;
	else
		cout << a*b;


	return 0;
}
