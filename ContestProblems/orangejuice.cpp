#include <bits/stdc++.h>
using namespace std;
int main(){
	long double sum = 0;
	long double n;
	cin>>n;
	long double a;
	for(int i = 0; i<n;i++) {
		cin>>a;
		sum += a;
	}
	long double ans = sum/n;
	cout<<fixed<<setprecision(12)<<ans<<endl;
}
