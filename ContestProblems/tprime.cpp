#include <bits/stdc++.h>
using namespace std;

long long sieve[1000000];

bool raiz(long long n){
    double sqrt_n = sqrt(n);
    if(sqrt_n == int(sqrt_n)){
        return true;
    }
    else{
        return false;
    }
}
void msieve(){
    sieve[0] = sieve[1] = 1;
    for(long long i=2;i<1000000;i++){
        if (sieve[i]==0){
            for(long long j=i*i;j<1000000;j+=i){
                sieve[j] = 1;
            }
        }
    }
}


int main(){
    msieve();
    long long t;
    long long n;
    cin>>t;
    
    while(t--){
        cin>>n;
        if( n == 4) cout<<"YES\n";
        else if(n%2 == 0) cout<<"NO\n";
        else if(raiz(n) && sieve[int(sqrt(n))]==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
