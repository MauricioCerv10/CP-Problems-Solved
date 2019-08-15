#include <bits/stdc++.h>
using namespace std;
int x[105];
int y[105];

int main(){
	int n;
	bool iguales = true;
	bool pi = false;
	cin>>n;
	int sumx = 0, sumy = 0;
	for(int i = 0; i<n; i++){
		cin>>x[i]>>y[i];
		sumx += x[i];
		sumy += y[i];
		//if(x[i] != y[i]) iguales = false;
		if((x[i]%2 == 0 && y[i]%2 != 0) || (x[i]%2 != 0 && y[i]%2 == 0)) pi = true;
	}
	if(sumx%2 == 0 && sumy%2 == 0)	cout<<0<<endl;
	else if(sumx%2 != 0 && sumy%2 != 0  && pi){
		cout<<1<<endl;
	}else{
		cout<<-1<<endl;
	}
}
