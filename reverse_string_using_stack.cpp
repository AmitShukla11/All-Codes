#include<iostream>
#include<stack>
using namespace std;

// reversing a string using stack using stl


void reverse_using_stack(string &s)
{
	stack<char> stk;
	for (int i = 0; i < s.size(); ++i)
		stk.push(s[i]);

	for (int i = 0; stk.size(); ++i)
	{
		s[i] = stk.top();
		stk.pop();
	}
}

int main() 
{
	// random inputs..
	string s;
	cin >> s;
	cout << s << endl;
	reverse_using_stack(s);
	cout << s << endl;
	return 0;
}
