#include <iostream>
#include <cctype>
#include <vector>
#include <stack>
using namespace std;
int postfix(string exp)
{
    int ans = 0;
    int m, n;
    stack<int> s;
    for (int i = 0; i < exp.length(); i++)
    {
        if (isdigit(exp[i]))
        {
            s.push(exp[i] - '0');
        }
        else
        {
            ans = 0;
            m = s.top();
            s.pop();
            n = s.top();
            s.pop();
            if (exp[i] == '-')
                ans += n - m;
            else if (exp[i] == '+')
                ans += n + m;
            else if (exp[i] == '*')
                ans += n * m;
            else
                ans += n / m;
            s.push(ans);
        }
    }
    return ans;
}
int main()
{
    string str;
    cout<<"Enter string : ";
    cin>>str;
    cout << postfix(str);
}