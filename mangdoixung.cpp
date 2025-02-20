#include <bits/stdc++.h>
using namespace std;
bool test(const vector<int>&mang) { 
	int n=mang.size();
	for(int i=0;i<n/2;i++) 
				if(mang[i]!=mang[n-i-1]) 
			return false;
		 return true;
}
int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int>mang(n);
		for (int i=0;i<n;i++) {
			cin>>mang[i];
		}
		if(test(mang)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
