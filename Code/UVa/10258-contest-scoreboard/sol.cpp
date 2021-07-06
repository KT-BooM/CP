#include<bits/stdc++.h>
using namespace std;
using ll = long long;

class Person
{
public:
    int c;
    int p;
    int t;
    int total[10] = {0};
    bool already[10] = {false};
    Person(int _c): c(_c), p(0), t(0){}

    bool operator<(const Person &person){
        if(p == person.p){
            if(t == person.t){
                return (c < person.c);
            }
            return (t < person.t);
        }
        return (p > person.p);
    }

};

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, c, p, t;
    bool isin[101];
    char l;
    string input;
    cin >> n;
    cin.ignore();
    cin.ignore();

    while(n--) {
        vector<Person> x;
        bool isin[101] = {false};
        for(int i = 0; i < 101; i++){
            x.push_back(Person(i));
            // for(int j = 0; j < 10; j++)
            //     x[i].already[j] = false;
           
        }
        
        while(getline(cin, input) && input.length()){
            stringstream in(input);
            in >> c >> p >> t >> l;
            isin[c] = true;
            if(!x[c].already[p]){
                if(l == 'I')
                    x[c].total[p] += 20;
                if(l == 'C'){
                    x[c].p += 1;
                    x[c].t += t;
                    x[c].t += x[c].total[p];
                    x[c].already[p] = true;
                }

            }
            //cout << "submission : " << x[c].c << endl;
        }
        vector<Person> ans;
        for(int i = 0; i < 101; i++){
            if(isin[i])
                ans.push_back(x[i]);
        }
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i].c << " " << ans[i].p << " " << ans[i].t << endl;
        }

        // for(int i = 0; i < cs.size(); i++){
        //     cout << cs[i] << " " << x[cs[i]][0] << " " << x[cs[i]][1] << endl;
        // }
        if(n)
            cout << endl;
        
    }
	
	
	
	
	return 0;
}
