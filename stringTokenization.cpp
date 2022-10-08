#include<bits/stdc++.h>
using namespace std;

int main(){

char s[100] = "This is a sunny day.";

char *ptr = strtok(s,"i");
cout<<ptr<<endl;

while(ptr!=NULL){
ptr = strtok(NULL,"i");
cout<<ptr<<endl;
}

}
