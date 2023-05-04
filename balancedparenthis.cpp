#include<iostream>
using namespace std;
#include"stackusingarray.h"
#include<stack>
bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')')
     return true;
	else if(opening == '{' && closing == '}')
     return true;
	else if(opening == '[' && closing == ']') 
    return true;
    else
	return false;
}

bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> s;
    for(int i =0; i < expression.length() ; i++){
        if(expression[i] == '(' || expression[i] == '[' || expression[i] == '{'){
            s.push(expression[i]);
        }
        else if(expression[i] == ')' || expression[i] == ']' || expression[i] == '}'){
            
			if(s.empty() || !ArePair(s.top(),expression[i]))
				return false;
			else
				s.pop();

        }
    }
    
return s.empty() ? true:false;
}


int main() {
    string expression;
	cout<<"Enter an expression:  "; // input expression from STDIN/Console
	cin>>expression;
	if(isBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";

     
     return 0;
}