#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &A){
	
	int n = A.size();
	int ini = 0;
	int ant[n];
	int tmp[n];
	for(int i = n; i > 1 ; i -= 2){
		for(int j = ini + i-1; j >= ini; j--){
			ant[2*ini+i-1 - j] = A[j][ini];
		}
		int xtmp = ini, ytmp = ini;
		for(int j = 0; j<4; j++){
			if(j == 0){
				for(ytmp = ytmp;ytmp < ini + i; ytmp++){
					tmp[ytmp] = A[xtmp][ytmp];
					A[xtmp][ytmp] = ant[ytmp];
					ant[ytmp] = tmp[ytmp];
				}
				ytmp--;
			}else if(j == 1){
				ant[xtmp] = ant[ini + i -1];
				for(xtmp = xtmp + 1; xtmp < ini + i; xtmp++){
					tmp[xtmp] = A[xtmp][ytmp];
					A[xtmp][ytmp] = ant[xtmp];
					ant[xtmp] = tmp[xtmp];
				} 
				xtmp--;
			}else if(j == 2){
				ant[ini] = ant[ini+i-1];
				for(ytmp = ytmp-1; ytmp >= ini; ytmp--){
					tmp[2*ini+i-1 - ytmp] = A[xtmp][ytmp];
					A[xtmp][ytmp] = ant[2*ini+i-1 - ytmp];
					ant[2*ini+i-1 - ytmp] = tmp[2*ini+i-1 - ytmp];	
				}
				ytmp++;
			}else{
				for(xtmp = xtmp-1; xtmp > ini; xtmp--){
					A[xtmp][ytmp] = ant[2*ini+i-1 - xtmp];
				}
			}
		}
		ini++;
	}
}
int main(){
	int n; cin>>n;
	vector<vector<int>> v(n);
	int num = 0;
	for(int i = 0; i<n; i++){
		vector<int> vec;
		for(int j = 0; j < n; j++){
			vec.push_back(num); num++;
		}
		v[i] = vec; 
	}
	for(int i = 0; i<n; i++){
		
		for(int j = 0; j < n; j++){
			cout<<v[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	
	rotate(v);
	
	cout<<"\n\n\n\n";
	for(int i = 0; i<n; i++){
		for(int j = 0; j < n; j++){
			cout<<v[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	
	
}
