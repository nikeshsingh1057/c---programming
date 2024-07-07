                              // passing in c++

//1 pass by value hoga.
#include <bits/stdc++.h>
using namespace std;

void printString(string str) { // pass by value me aaya hai.
    str[0]='P';
    cout << str << endl;   // op-> Pello, World!
}

int main() {
    
    string myString = "Hello, World!" ;
    printString(myString); // pass by value.
    cout<<myString;  // op-> Hello, World!
    return 0;
}
/*
Notes:
This approach can be less efficient for large strings because it involves copying the entire string.  */

                                      //2 pass by reference

#include <bits/stdc++.h>
using namespace std;
void modifyString(string &str) {
    str[0] = 'A';
    str+=" nikesh";
}

int main() {
    string myString = "Hello, World!";
    modifyString(myString); // Pass by reference
    cout << myString << endl;  //op-> "Aello, World! nikesh"
    return 0;
}

/*
Notes:
The function can modify the original string.
No copying of the string occurs, which is more efficient.
*/

                                         /* By Constant Reference:
                Passing by constant reference allows the function to access but not modify the original string.*/

#include <bits/stdc++.h>
void printString(const std::string &str) {
    cout << str << endl;
}

int main() {
    string myString = "Hello, World!";
    printString(myString); // Pass by constant reference
    return 0;
}
/*  Notes:
The function cannot modify the string.
Efficient because it avoids copying the string.
*/

// rest c wala bee valid hai i.e c me jaise string pass hota thaa vo bhee valid hai.
