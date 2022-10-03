#include <iostream>
using namespace std;

// from 2 to sqrt(N) check divisible by 2 factors only

// Complexity - O(sqrt(n))

bool checkPrime(int n){
	int count = 0;
	for(int i = 1;i*i<=n;i++){
		if(n%i == 0){
			if(i*i == n) count +=1;
			else count += 2;
		}
	}
	if(count == 2){
		return true;	
	}
	return false;
}

int main() 
{
	int n,cnt = 0;
	cin >> n;
	for(int i = 1;i<=n;i++){
		if(checkPrime(i) == true) 
		{
			cnt++;
			cout << i << " " ;
		}
	}
	cout << cnt << endl;
	return 0;
}
