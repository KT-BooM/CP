#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){
	int t;
	string n;
	cin >> t;
	vector<char> vc;
	
	for(int i=0;i<t;i++){
		cin >> n;
		char cstr[n.size()+1];
		strcpy(cstr,n.c_str());
		
		for(int j=0;j<strlen(cstr)-1;j++){
			if(cstr[j]!=cstr[j+1]){
			
				vc.push_back(cstr[j]);
				//cout << "dsad" << endl;
			}
		}
		
	}
	for(int i=0;i<t;i++)
		cout << vc.at(i);
	return 0;
}
