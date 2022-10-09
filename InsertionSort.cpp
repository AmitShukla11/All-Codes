#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n){
for(int i=1;i<n;i++){
    int j = i-1;
    int e = a[i];
    while(j>=0 && a[j]>e){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=e;
    }

}

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];

selection_sort(a,n);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}

