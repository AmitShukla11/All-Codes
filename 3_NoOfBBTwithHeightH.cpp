#include <iostream>
#include <cmath>
using namespace std;

// no. of balanced binary trees = x*x + 2*x*y

// where x =  all possible combinations of tree of height h-1 (left subtree)
// where y = all possible combinations of tree of height h-2 (right subtree)

// case 1 - when both subtrees are of h-1 -> x*x 
// case 2 - when left subtree are of h-1 and right subtee of h-2 -> x*y
// case 3 - when left subtree are of h-2 and right subtree of h-1 -> y*x

// combining 3 cases we get (x*x + x*y + y*x) = (x*x + 2*x*y)


int balancedBTs(int h)
{
	if(h == 0 || h == 1){
		return 1;
	}
	int x = balancedBTs(h-1);
	int y = balancedBTs(h-2);
	
	int m = pow(10,9) + 7;
	
	long x1 = (long)x*x;
	long x2 = (long)x*y*2;
	
	int n1 = (int)(x1%m);
	int n2 = (int)(x2%m);
	
	int res = (n1 + n2) % m;
	
	return res;
}
int main() {
	int h ; // height of balanced binary tree
	cin >> h;
	cout << balancedBTs(h) << endl;
	return 0;
}
