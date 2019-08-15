#include <bits/stdc++.h>
using namespace std;

char wd[1005];
bool iguales(string s){
	for(int i = 0; i<s.length()-1;i++) if(s[i] != s[i+1]) return false;
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if (s != string(s.rbegin(), s.rend())) {
    		cout<<s<<endl;
    		continue;
		}	
		if(iguales(s)){
			cout<<-1<<endl;
			continue;
		}
		for(int i = 0;i<s.length(); i++){
			wd[i] = s[i];			
		}
		sort(wd,wd+s.length());
		for(int i = 0;i<s.length();i++){
			cout<<wd[i];
		}
		cout<<"\n";
	}
}
