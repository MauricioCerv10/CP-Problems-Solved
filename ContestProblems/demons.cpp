#include <bits/stdc++.h>
using namespace std;

int main(){
	double n,x,y;
	cin>>n>>x>>y;
	long long ppn = ceil(n*(0.01*(y)));
	long long ans =(long long) ppn - x;
	if(ans >= 0) cout<<ans<<endl;
	else cout<<0<<endl;
	
}
