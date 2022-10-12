#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int a[1000][1000];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int tl,tr,bl,br;
        cin>>tl>>tr>>bl>>br;
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j] = a[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
            b[i][j] += b[i][j-1];
        }
    }

    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j] += b[i-1][j];
        }
    }

    int sum=0;
    if(tl==0 || tr==0)
    sum = b[bl][br];
    else
    sum = b[bl][br]-b[tl-1][br]-b[bl][tr-1]+b[tl-1][tr-1];

    cout<<sum<<endl;
    
    
    }
}
