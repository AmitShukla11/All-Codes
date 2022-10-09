#include <bits/stdc++.h>
using namespace std;
void build(int i,int l,int r,vector<int>&arr,vector<int>&seg){
	if(l==r){
		seg[i]=arr[l];
		return;
	}
	int mid= l + (r-l)/2;
	build(2*i +1,l,mid,arr,seg);
	build(2*i +2,mid+1,r,arr,seg);
	seg[i]=min(seg[2*i+1],seg[2*i+2]);
}
int rmin(int i,int l,int r,int low,int high,vector<int>&seg){
  if(l<=low && high<=r){
     return seg[i];
  }
  if(l>high||r<low){
	  return INT_MAX;
  }
  int mid= low + (high-low)/2;
  int left=rmin(2*i +1,l,r,low,mid,seg);
  int right=rmin(2*i +2,l,r,mid+1,high,seg);
  return min(left,right);
}
void update(int i,int pos,int val,int low,int high,vector<int>&arr,vector<int>&seg){
	if(low==high){
		arr[pos]=val;
		seg[i]=val;
	}
	else{
	int mid= low + (high-low)/2;
	if(low<=pos && pos<=mid){
		update(2*i +1,pos,val,low,mid,arr,seg);
	}
	else{
		update(2*i+2,pos,val,mid+1,high,arr,seg);
	}
	seg[i]=min(seg[2*i +1],seg[2*i+2]);
	}
}
int main() {
	int n,q;
	cin>>n>>q;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int>seg(4*n,0);
	build(0,0,n-1,arr,seg);
	while(q--){
		char c;
		int l;
		int r;
		cin>>c>>l>>r;
		if(c=='q'){
			cout<<rmin(0,l-1,r-1,0,n-1,seg)<<endl;
		}
		else if(c=='u'){
            update(0,l-1,r,0,n-1,arr,seg);
		}

	}
}