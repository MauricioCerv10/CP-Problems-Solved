#include <bits/stdc++.h>
using namespace std;
char rc[15][15];
int main(){
	int r,c;
	cin>>r>>c;
	for(int i = 0; i<r; i++)
		for(int j = 0; j<c; j++)cin>>rc[i][j];
	int sum = 0;
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			if(rc[i][j] == 'S') break;		
			if(j == c-1){
				for(int z = c-1; z>=0; z--){
						sum++;
						rc[i][z] = '-';
				}
			}
		}
	}

	for(int i = 0; i<c; i++){
		for(int j = 0; j<r; j++){
			if(rc[j][i] == 'S') break;		
			if(j == r-1){
				for(int z = r-1; z>=0; z--){
					if(rc[z][i] != '-'){
						sum++;
						rc[z][i] = '-';
					}
				}
			}
		}
	}
	cout<<sum<<endl;
}
