#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b) {
	while (b!=0) {
		int r = a%b;
		a=b;
		b=r;
	} return a;
}
int bcnn(int a, int b) {
	return (a*b)/ucln(a,b);
}
int main() {
	int t; cin>>t;
	
	while (t--) {
		int a,b;
		cin>>a>>b;
		cout<<ucln(a,b)<<endl<<bcnn(a,b)<<endl;
	}
	return 0;
}
