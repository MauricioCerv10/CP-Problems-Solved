#include <bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	int edo = 0;
	bool error = false;
	for(int i = 0; i<n.length();i++){
		if(edo == 0 && n[i] == '1') edo = 1;
		else if(edo == 1 && n[i] == '1') edo = 1;
		else if(edo == 1 && n[i] == '4') edo = 2;
		else if(edo == 2 && n[i] == '1') edo = 1;
		else if(edo == 2 && n[i] == '4') edo = 3;
		else if(edo == 3 && n[i] == '1') edo = 1;
		else{
		 	error = true;
		 	break;
		}
	}
	if(error) cout<<"NO\n";
	else cout<<"YES\n";
}
