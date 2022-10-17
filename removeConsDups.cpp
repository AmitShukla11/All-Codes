#include<bits/stdc++.h>
using namespace std;

void removeDups(char a[]){
int i=0;
int j=1;
while(j<strlen(a)){
if(a[j]!=a[i])
    {
        a[i+1]=a[j];
        i++;

    }
    j++;
}
a[i+1]='\0';
}

int main(){
char c[1000];
cin.getline(c,1000);
removeDups(c);
cout<<c;
}
