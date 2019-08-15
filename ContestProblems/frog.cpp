#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,k;
		cin>>a>>b>>k;
		
		long long ans;
		if(k%2 == 0) ans = a*(k/2) - b*(k/2) ;
		else ans = a*( k/2 + 1 ) - b*(k/2) ;
		cout<<ans<<endl;	
	}
}
