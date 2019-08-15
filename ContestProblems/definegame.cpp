#include <bits/stdc++.h>
using namespace std;
int main(){
	long long v;
	cin>>v;
	long long ans = v - (v - 1);
	if (v <= 2) cout<<v<<endl;
	else cout<<ans<<endl;
}
