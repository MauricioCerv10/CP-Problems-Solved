#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	cin>>s>>t;
	if(s.length() != t.length()){
		cout<<"No\n";
		return 0;
	} 
	bool canT = true;
	for(int i = 0; i<s.length(); i++){
		if(s[i] == t[i]) continue;
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
			if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'){
				canT = false;
				break;
			}
		}
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			if(t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u'){
				canT = false;
				break;
			}
		}
		
	}	
	if(canT) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
