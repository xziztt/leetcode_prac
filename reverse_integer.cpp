#include<bits/stdc++.h>
#include<limits>

using namespace std;

void solve(int x){


	int current = 0;
	int temp = x;
	while(temp != 0){

		current = (current*10) + (temp % 10);
		temp = temp/10;
		//cout<<current<<"\n";
	}

	cout<<current;
}

int main(){

	int x = 1256;

	solve(x);

	return 0;
}