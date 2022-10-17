#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int a=2,b=4;
    //swap krna 2 nums ko
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    //reverse(start,end) dena hota hai
    reverse(arr,arr+n);
    for(auto it:arr)
    cout<<it<<" ";

}
