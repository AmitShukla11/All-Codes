#include <iostream>
using namespace std;


// Range of GCD is [1,min(a,b)]
// EUCLID's Algo - gcd(a,b) = gcd(b,a%b)

// Complexity - O(log2(max(a,b)))

int gcd(int a , int b){
	if(a<b){
		return gcd(b,a);		
	}
	if(b==0) {
		return a;
	}
	return gcd(b,a%b);
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
	return 0;
}
