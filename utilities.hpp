
#include <iostream>


using namespace std;


void sayHello() {


    cout << "Hello world!" << endl;


}

void mainLoop() {
 
    while (true) {
        string userInput;
        cout << "Enter an input:";
        cin >> userInput;
        cout << endl;
        cout << "You have entered: " << userInput << endl;
        
        if (userInput == "exit") {
            break;
        }
    }

    

}

