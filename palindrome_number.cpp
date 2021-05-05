#include<bits/stdc++.h>

using namespace std;

bool solve(long long int x){
	cout<<x<<"\n";

	long long int current = 0;
	long long temp = x;

	if(x < 0){

		return false;
	}

	while(temp > 0){

		current = (current*10) + (temp % 10);
		temp = temp/10;
		//cout<<current<<"\n";
	}

	
	cout<<current;
	if(current == x){

		return true;
	}
	else{

		return false;
	}




}


int main(){

	int x = -101;
	cout<<solve(x);

	return 0;
}