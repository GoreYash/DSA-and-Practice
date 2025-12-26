/*
Luhn Algorithm
--------------
1. Double every second digit from right to left
   If doubled number is 2 digits, split them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 & 3
5. If step 4 is divisible by 10, # is valid
4003830171874018
*/
#include <iostream>
using std::cout,std::cin,std::string;


bool isValid(string accNum){
    int sumOdd = 0, sumSingle = 0, curr;

    for(int i = 0; i < accNum.size(); i++){
        curr = accNum[accNum.size() - 1 - i] - '0';
        if(i % 2 == 1){
            curr = curr*2;
            if(curr < 10){
                sumSingle += curr;
            }
            else{
                sumSingle += curr % 10 + curr / 10;
            }
        }
        else{
            sumOdd += curr;
        }
    }
    
    if((sumOdd+sumSingle)%10==0) return true;
    else return false;
}
int main() {
    string accNum;
    cout << "************************************\n";
    cout << "Welcome to account number verifier!\n";
    cout << "************************************\n";
    cout << "Please enter a digit account number: ";
    cin >> accNum;
    isValid(accNum)? cout << "The account number is valid! ": cout << "The account number is NOT valid! ";
    return 0;
}
