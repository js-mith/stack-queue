#include <iostream>
using namespace std;
#include <stack>
bool checkRedundantBrackets(string str)
{
    // Write your code here
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] != ')')
            st.push(str[i]);

        else
        {

            bool flag = true;
            char x = st.top();
            st.pop();
            while (x != '(')
            {

                if (x == '+' || x == '-' || x == '*' || x == '^' || x == '/')
                    flag = false;
                x = st.top();
                st.pop();
            }
            if (flag == true)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
    return 0;
}