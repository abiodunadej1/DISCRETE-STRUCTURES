#include <vector>
#include <iostream>

using namespace std;
int main(){
int unlockCode = 56798;
int lockCode = 12345;
int userInput;
int numberOfTries;
int average;

cout << "Type in the code to unlock your device!" << endl;
cin >> userInput;
if(userInput == unlockCode){
    cout << "Welcome in!" << endl;
} else {
    if( userInput != unlockCode)
    cout << "sorry you can't get in!" << endl;
}
cout << "Type in the code to lock your device!" << endl;
cin >> userInput;
if(userInput == lockCode)
{ 
    cout << "Your device is now locked!" << endl;  
}

numberOfTries = userInput + unlockCode + lockCode;
average = unlockCode + lockCode / 2;
cout << "Minimum number of tries is" << " = " << average << endl;

cout << "Maximum number of tries is" << " = " << numberOfTries << endl;







    return 0;
}
