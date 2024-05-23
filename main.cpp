#include <iostream>
#include <string>
#include "uppercase.h"
<<<<<<< HEAD
#include "reverse.h"
=======
#include "lowercase.h"
>>>>>>> origin/main
using namespace std;
int main() {
    string text = "Hello, World!";
    string upperText = toUpperCase(text);
    cout << "Upper case: " << upperText << endl;
<<<<<<< HEAD
    string reversedText = reverseString(text);
    cout << "Reversed: " << reversedText << endl;
=======
    string lowerText = toLowerCase(text);
    cout << "Lower case: " << lowerText << endl;
>>>>>>> origin/main
return 0; }