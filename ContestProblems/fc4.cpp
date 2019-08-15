#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k;
	cin>>n>>m>>k;
	int send = 4;
	if(n == 1 && m == 1) send = 1;
	else if(n == 1 || m == 1) send = 2;
	int x, y;
	for(int i = 0; i<k; i++){
		cin>>x>>y;
		if((x == 1 && y == 1) || (x == n && y == 1) || (x == 1 && y == m) || (x == n && y == m)) send--;
	}
	cout<<send<<endl;
}
