#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long k,p,n;
	while(t--){
		cin>>k>>p>>n;
		long long ans = (k-p)*n;
		if(p > k) ans = 0;
		cout<<ans<<"\n";
	}
}
