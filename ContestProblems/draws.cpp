#include <bits/stdc++.h>
using namespace std;
int a[10005];
int b[10005];
int main(){
	int n;
	cin>>n;
	for(int i = 1; i<=n;i++) cin>>a[i]>>b[i];
	int draws = 0;
	if(n == 1) cout<<min(a[1]-a[0],b[1]-a[0])<<endl;
	else 
		for(int i = 1; i<=n;i++){
			if(a[i] >= a[i-1] && b[i]>=a[i-1] && b[i] > b[i-1]) draws += min(a[i]-a[i-1]+1,b[i]-a[i-1]+1);
			else if(b[i] >= b[i-1] && b[i]>=b[i-1] && a[i] > a[i-1]) draws += min(b[i]-b[i-1]+1,a[i]-b[i-1]+1);
		}
	cout<<draws<<endl;
}
