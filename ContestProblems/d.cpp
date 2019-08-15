#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; 
	cin>>n;
	long long ans = n*(n+1)/2;
	if(ans%2 == 0) cout<<0<<endl;
	else cout<<1<<endl;
}
