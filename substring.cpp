#include<bits/stdc++.h>
using namespace std;

void solve(std::string s){

	int l = 0,result = 0;
	std::unordered_map<int,int> umap;

	for(int r = 0;r < s.size();r++){

		if(umap[s[r]]){

			while(s[l] != s[r]){

				umap[s[l]] = 0;
				l++;
				cout<<"repeating";
				cout<<"\n"<<r;
				cout<<"\n"<<l;
			}

			l++;

		}

		result = max(result,r-l+1);
		umap[s[r]] = 1;



	}

	cout<<result;



}

int main(){
	std::string s = "luadl";
	solve(s);
}