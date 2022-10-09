#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char a[]){
int i=0;
int j= strlen(a)-1;
while(i<j){
    if(a[i]==a[j]){
        i++;
        j--;
    }else{
        return false;
    }
}
return true;
}

int main(){
char ch[1000];
cin.getline(ch,1000);

if(isPalindrome(ch)) cout<<"palindrome";
else cout<<"Not palindrome";


return 0;
}
