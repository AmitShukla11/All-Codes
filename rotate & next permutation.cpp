#include<iostream>
#include<algorithm>
using namespace std;

//rotate and next permutation fn dono kisi bhi stl ke lie use ho skte like array,vector etc.
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    //rotate(start,mid,end)--> mid mtlb jha se rotate krna hai woh wala
    rotate(arr,arr+3,arr+n);
    for(auto i:arr)
    cout<<i<<" ";

    //next_permutation(start,end) --> ye syntax hota hai 
    next_permutation(arr,arr+n);

    cout<<endl;
    for(auto i:arr)
    cout<<i<<" ";

}
