#include <iostream>
using namespace std;
int stepsReq(int x){
    int steps = 0;
		while(x != 0 && x > 0){
			if (x <= 5){
			    steps ++;
			    x == 0;
			    return steps;
			}
			else{
			    x -= 5;
			    steps++;
			}
			
		}
}

int main(){
	int x;
	cin >> x;
	int ans =  stepsReq(x);
	cout << ans;
	return 0;
}