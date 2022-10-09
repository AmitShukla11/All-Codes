class Solution {
public:
    vector<int> Manacher(string& s)
    {
        string t = "$#";    // for start of string
        for(auto &it: s)
        {
            t.push_back(it);
            t.push_back('#');   // for choosing blank space as center of palindrome
        }
        t.push_back('@');   // for end of string

        int N = t.length();
        vector<int> v(N);

        // Manacher's algorithm
        int C = 0, R = 0;

        for(int i = 1; i < N - 1; i++)
        {
            int mirr = 2 * C - i;

            if(i < R)
                v[i] = min(R - i, v[mirr]);

            while(t[i + (1 + v[i])] == t[i - (1 + v[i])])
                v[i]++;

            if(i + v[i] > R)
            {
                C = i;
                R = i + v[i];
            }
        }
        return v;
    }
    
    string longestPalindrome(string& s) 
    {
        int n = s.length();
        vector<int> v = Manacher(s);
        string res = s.substr(0, 1);
        int N = v.size();
        for(int i = 0; i < N; i++)
        {
            if(res.length() < v[i])
            {
                int start = i/2 - ((i+1)&1) - v[i]/2;  
                start = max(start, 0);
                res = s.substr(start, v[i]);
            }
        }
        return res;
    }
};
