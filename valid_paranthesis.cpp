#include<bits/stdc++.h>

using namespace std;

bool solve(string s){

	std::stack<char> st;
	for(int i = 0;i < s.size();i++ ){


		if(s[i] == '(' || s[i] == '{' || s[i] == '['){
			if(i == (s.size() - 1)){

				return false;
			}

			st.push(s[i]);
			
		}
		else if(s[i] == ')' && !st.empty() && st.top() == '('){

			st.pop();

		}
		else if(s[i] == ']' && !st.empty() && st.top() == '['){

			st.pop();

		}
		else if(s[i] == '}' && !st.empty() && st.top() == '{'){

			st.pop();
		}
		else{

			return false;
		}

	}
	if(st.empty()){

		return true;

	}
	else{

		return false;
	}

	

}

int main(){

	std::string s;
	s = "((";
	cout<<solve(s);

	return  0;
}