#include <bits/stdc++.h>
using namespace std;
int tinh(int a) {
	int dem=0;
	for(int i=1;i<=a;i++) {
		if((a%i==0)&&(i%2==0)) 
			dem++;
} return dem; }
int main() {
	int t; cin>>t;
	while(t--) {
		int a; cin>>a;
		cout<<tinh(a)<<endl;
	} return 0;
}  
