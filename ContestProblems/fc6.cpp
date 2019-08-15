#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int expBinaria(int a,int b,int m){
        int res = 1;
        while(b){
                if(b&1) res = (a*res)%m;
                b >>= 1;
                a = ((a%m)*(a%m))%m;
        }
        return res;
}

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

int main(){
	int t;
	cin>>t;
	int caso = 1;
	while(t--){
		int n; cin>>n;
		int ans = 0;
		if(n == 1) ans = 1;
		else if(isPrime(n)) ans = expBinaria(2,n-1,n);
		else ans = expBinaria(n-1,2,n);
		cout<<"Case #"<<caso<<": "<<ans<<"\n"; caso++;
	}

}
