#include<iostream>
using namespace std;
#include<stack>
int countBracketReversals(string input) {
	// Write your code here
	int len = input.size();

	if(len%2){
		return -1;
	}
	stack<char> s;
	for(int i=0; i<len; i++){
		if(input[i] == '}' && !s.empty()){
			if(s.top() == '{')
				s.pop();
			else
				s.push(input[i]);
		}else
			s.push(input[i]);
	}
	int count_left = s.size();
	int n = 0;
	while(!s.empty() && s.top() == '{'){
		s.pop();
		n++;
	}
	
	return (count_left/2 + n%2);
}

int main() {
        string input;
    cin >> input;
    cout << countBracketReversals(input);
     return 0;
}