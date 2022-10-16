
class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size(), m=p.size(), i, j, k=0;
        vector<vector<bool>>arr(m+1, vector<bool>(n+1, false));
        
        arr[0][0] = true;
        i=0;
        while(p[i]=='*'){
            arr[i+1][0] = true;
            i++;
        }
        
        
        for(i=1; i<=m; i++){
            if(p[i-1]=='*'){
                for(j=1; j<=n; j++){
                    arr[i][j] = arr[i-1][j] || arr[i][j-1] || arr[i-1][j-1];
                }
            }
            else if(p[i-1]=='?'){
                for(j=1; j<=n; j++){
                    arr[i][j] = arr[i-1][j-1];
                }
            }
            else{
                for(j=1; j<=n; j++){  
                    if(p[i-1]==s[j-1]){arr[i][j] = arr[i-1][j-1];}
                }
            }
        }
        
        return arr[m][n];
    }
};