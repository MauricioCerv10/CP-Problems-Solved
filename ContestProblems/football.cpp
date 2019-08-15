#include <bits/stdc++.h>
using namespace std;

vector<string> teams;
vector<int> gol;
bool exist(string str){
	if(teams.size() == 0) return false;
	for(int i = 0; i < teams.size(); i++){
		bool match = true;
		if(teams[i].length() != str.length()) continue;
		for(int j = 0; j<str.length(); j++){
			if(teams[i][j] != str[j]){
				match = false;
				break;
			}
		}
		if(match){
			gol.at(i) += 1;
			return true;
		}
	}
	return false;
}

int main(){
	map<string,int> team;
	int n ;
	cin>>n;
	string s;
	for(int i = 0; i<n; i++){
		cin>>s;
		if(exist(s) == false){
			teams.push_back(s);
			gol.push_back(1);
		} 
	}
	int idx = 0, max = -45454545;
	for(int i = 0; i<gol.size() ; i++){
		if(gol.at(i) > max){
			idx = i;
			max = gol.at(i);
		} 
		 
	}
	cout<<teams.at(idx)<<endl;
	
	
}
