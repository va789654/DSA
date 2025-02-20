#include <bits/stdc++.h>
using namespace std;
int main() {
	char a, plus, b, equal, c;
	cin>>a>>plus>>b>>equal>>c;
	int d=a-'0';
	int e=b-'0';
	int f=c-'0';
	if (d < 0 || d > 9 || e < 0 || e > 9 || f < 0 || f > 9) {
        cout << "NO" << endl;
        return 0;
}
	if(d+e==f) 
		cout<<"YES"<<endl;	
	else cout<<"NO"<<endl;
	return 0;
}
