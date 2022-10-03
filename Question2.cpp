#include <bits/stdc++.h>
using namespace std;
 
#define ff(i,n) for(ll i=0; i<n; i++)
#define ll long long

// here we are using recursion to solve this problem

int solve(int x,int cnt, int k, int p)
{
    // as we know that all the coins are weighing 10g except for 10g.
    // we are going to compare three stacks at a time.
    
    // for the worst possible scenerio, we have to go all the way down to the bottom comparison where the coins when divided into 3 stacks come with 1 coin each
    
    if(x==2) {
        cnt=max(k+1, cnt);
        return cnt;
    }
    
    if(x==1) {
        cnt=max(k+(p==2), cnt);
        return cnt;
    }
    
    else {
        //as we know that for comparing 3 stacks we need a total of 2 weighings, i.e., (a,b), (b,c), (c,a)
        //we will add 3 to every weighing counts
        cnt+=2;           
        solve(x/3, cnt, k+2, x%3);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        // here n = number of coins which are given in the question = 27
        int n;
        cin>>n;
        int cnt=0;
        //as for a comparison you need atleast 3 coins so we can't identify
        if(n<3) cout<<"Cannot identify the odd coin out.\n";
        else
        cout<<"The number of weighings needed = "<<solve(n, cnt, 0, 0)<<"\n";
    }
 return 0;
 }
