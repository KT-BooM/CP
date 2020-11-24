#include<iostream>
using namespace std;
int main(){
	long long a,b;
	int n;
	cin >> n;
	long long sum;
	for(int i=0;i<n;i++){
		cin >> a;cin >> b;
		sum = 0;
		while(true){	
			if(a>=b){
				sum+=a/b;
				a = a%b;
			}
			else if(a<b){
				sum+=b/a;
				b = b%a;
			}
			if(a==0||b==0)
				break;
		}
		cout << sum << endl;
	}

	
	return 0;
}
