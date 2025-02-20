#include <bits/stdc++.h>
using namespace std;
int cuoi(int a) {
	return a%10;
}
int dau(int a) {
	while(a>=10) {
		a=a/10;
	} return a;
}
int main() {
	int t; cin>>t;
	while(t--) {
		int a; cin>>a;
		if(cuoi(a)==dau(a)) 
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	} return 0;
}
