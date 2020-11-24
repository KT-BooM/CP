#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long int a;
	cin >> a;
	
		long long int temp = 1;
		for(long long int i=1;i*i<a;i++){
			if(a%i==0){
				if(temp+a/temp>=i+a/i)
				temp = i;
			}
			
		}
		cout << temp << endl;
		cout << a/temp-1+temp-1;
	


	return 0;
}
