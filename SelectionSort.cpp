#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
int i=0;

while(i<n-1){
    int minIndex = i;
    for(int j=i;j<n;j++){
        if(a[j]<a[minIndex]){
            minIndex = j;
        }
    }
    swap(a[i],a[minIndex]);
    i++;

}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}
