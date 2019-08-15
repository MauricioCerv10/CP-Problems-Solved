#include <bits/stdc++.h>
using namespace std;

int main(){
	int fo;
	cin>>fo;
	char s[5];
	for(int i = 0; i<5; i++) cin>>s[i];
	if(fo == 24){
		if((s[0] - '0') > 2) s[0] = '0';
		if( (s[0] - '0') == 1 || (s[0] - '0') == 0){
			if((s[1] - '0') > 9){
				s[1] = '1';
			}
		}else if( (s[0] - '0') == 2 ){
			if((s[1] - '0') > 3){
				s[0] = '1';
			}
		}
	}else{
		if((s[0] - '0') > 1) s[0] = '1';
		if( (s[0] - '0') == 0){
			if((s[1] - '0') == 0 || (s[1] - '0') > 9){
				s[1] = '1';
			}
		}else if( (s[0] - '0') == 1 ){
			if((s[1] - '0') > 2){
				s[0] = '0';
			}
		}
	}
	if((s[3] - '0') > 5) s[3] = '0';
	for(int i = 0; i<5;i++) cout<<s[i];
	cout<<"\n";
}
