#include <iostream>
using namespace std;
int subtAlgo(int n, int k){
		while(k != 0 && k > 0){
			if (n % 10 == 0){
				n /= 10;
				k--;
			}
			else{
				n--;
		    	k--;
			}
			
		}
		return n;
}

int main(){
	long long int n,k;
	cin >> n >> k;
	int ans =  subtAlgo(n,k);
	cout << ans;
	return 0;
}