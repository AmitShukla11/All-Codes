class Solution {
public:
    int longestValidParentheses(string s) 
    {
        int n = s.length();
        vector<int> st = {-1};
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                st.push_back(i);
            }
            else
            {
                if(st.size() > 1 && s[st.back()] == '(')
                    st.pop_back();
                else
                    st.push_back(i);
            }
        }
        st.push_back(n);
        int res = 0;
        for(int i = 0; i < st.size() - 1; i++)
        {
            res = max(res, st[i+1] - st[i] - 1);
        }
        return res;
    }
};
