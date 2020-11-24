#include<iostream>
using namespace std;
int main(){
    int n;
    long long a,sum=0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a!=1&&a>1)
            sum+=a-1;
        else
            sum+=a*-1+1;

    }
    cout << sum;
    return 0;
}
