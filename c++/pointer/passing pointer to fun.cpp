/*
  1. pointer and reference dono alag alag hota hai (see gfg)
  2. pointer and reference c++ me support karta hai but c me reference support nahi karta hai only pointer hota hai.
  3. reference only c++ me hota hai new technology aaya hai.
*/

#include <stdio.h>

// C me pointer ke trah pass hota thee i.e ye old method hai but still working
// C doesn’t have a native reference feature like C++, so you typically pass variables by reference using pointers.

void modifyValue(int *num) {       
    *num = 20;  // Dereferencing the pointer to modify the value
}

int main() {
    int value = 10;
    printf("Before: %d\n", value);

    modifyValue(&value);  // Passing the address of 'value'

    printf("After: %d\n", value);  // Now value is changed
    return 0;
}


// C++ has native support for references, which makes it easier to pass variables by reference without the need for pointers.
// modern way

#include <iostream>
using namespace std;

void modifyValue(int &num) {
    num = 20;  // Directly modifying the referenced variable
}

int main() {
    int value = 10;
    cout << "Before: " << value << endl;

    modifyValue(value);  // Passing by reference

    cout << "After: " << value << endl;  // Now value is changed
    return 0;
}
/*
  In C: You use pointers to pass variables by reference.
  In C++: You can pass variables by reference using the & operator, which is more straightforward than using pointers.
*/


/*The key differences between passing by reference using pointers in C and references in C++ can be categorized based on syntax, behavior, safety, and current usage trends: -> write on chat gpt to get more clear */
