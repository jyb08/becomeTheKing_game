#include <iostream>
#include <string>

using namespace std;

string toLowerCases(string oldString) {


    for (int i = 0; i < oldString.length(); i++) {
        oldString[i] = tolower(oldString[i]);
    }
    
    return oldString;
}
  
int main() {


    char input[100];

    cin.getline(input, 100);

    string lowerUserInput = toLowerCases(input);


    cout << "input: |" << input << "|" << endl;
    cout << "lowerInput: |" << lowerUserInput << "|" << endl;



    return 0;
}