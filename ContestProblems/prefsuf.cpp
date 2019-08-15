#include <bits/stdc++.h>
using namespace std;

string wd[205]
bool ordena(pair<string,int> x, pair<string,int> y){
	return x.first.length() < y.first.length();
}
bool iguales(string s1, string s2){
	if(s1.length() != s2.length()) return false;
	for(int i =0; i<s1.length(); i++){
		if(s1[i] != s2[i]) return false; 
	}
	return true;
}

bool formar(string s1,string s2){
	for(int i = 1; i<s1.length(); i++) if(s1[i] != s2[i-1]) return false;
	return true;
}
bool prefi(string pre, string wd){
	for(int i =0; i<pre.length(); i++){
		if(pre[i] != wd[i]) return false; 
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	
	for(int i = 0; i<(2*n - 2); i++){
		cin>>wd[i];
	}
	string s1,s2;
	for(int i = 0;i<2*n-1;i++){
		if(wd[i].length() == n-1 && s1.length() == 0){
			s1 = wd[i];		
		}else if(wd[i].length() == n-1){
			s2 = w[i];
		}
		
	}
	ans 
	if(forma)
	cout<<"\n";
}
