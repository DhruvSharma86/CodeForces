#include <iostream>

using namespace std;


int minOper(string x, int len){
    int minOperation = 0;
    int noOfZeros = 0;
    
    for(int i = 0; i < len; i++){
        if (x[i] == '0'){noOfZeros++;}
    }
    
    if(x[0] == '1'){
        return noOfZeros;
    }
    else {
        int rightZeros = noOfZeros;
        int leftOnes = 0; 
        minOperation = rightZeros;
        
        for (int i = 0; i < len; i++){
            if(x[i] == '0'){
                rightZeros--;
            }
            else{
                leftOnes++;
            }
            
            int current = leftOnes + rightZeros;
            if (current < minOperation) { 
                minOperation = current;
            }
        }
        
        return minOperation;
    }
}
int main(){
    int noOfTestCases;
    cin >> noOfTestCases;
    while (noOfTestCases != 0){
       string x;
       int len;
       cin >> len;
       cin >> x;
       int ans =  minOper(x,len);
       cout << ans << endl;
       noOfTestCases --;
    }
	return 0;
}