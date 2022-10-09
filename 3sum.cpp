
    int threeSumClosest(vector<int>& v, int t) 
    {
        int n = v.size(), res = INT_MAX;
        sort(begin(v), end(v));
        for(int i = 0; i < n; i++)
        {
            int j = i + 1, k = n - 1;
            while(j < k)
            {
                int curSum = v[j] + v[k];
                if(res == INT_MAX || abs(curSum + v[i] - t) < abs(res - t))
                    res = curSum + v[i];
                
                if(curSum + v[i] < t)
                    j++;
                else
                    k--;
            }
        }
        return res;
    }
