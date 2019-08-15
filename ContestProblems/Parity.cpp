#include <bits/stdc++.h>
using namespace std;
#define MOD 2

long long a[100010];

long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
int main(){
	long long b,k;
	cin>>b>>k;
	for(int i = 1; i<=k ; i++) cin>>a[i];
	long long sum = 0;
	for(int i = 1; i<=k; i++){
		sum = (sum + (a[i]*fast_power(b,k-i))%MOD)%MOD;
	}
	if( sum  == 0) cout<<"even\n";
	else cout<<"odd\n";	
}
