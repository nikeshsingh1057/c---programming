                /* first in c how to return */

// first way 
#include <stdio.h>

char* display(){
    return "nikesh";
}
int main()
{
    char* str=display();
    printf("%s",str);   // nikesh 

    return 0;
}

//  2nd way 
#include <stdio.h>
char* display(){
    
    static char str[]="nikesh";// agar static nahi lagayenge then memory stack me milega so error dega main me but static lagane se memory heap me milega.
    return str;
}
int main()
{
    char * str;
    str=display();
    printf("%s",str);

    return 0;
}

// 3rd way
#include <stdio.h>
char* display(){
    char * str="nikesh";
    return str;
}
int main()
{
    char * str;
    str=display();
    printf("%s",str);
    return 0;
}
                                                            /* in c++ */

// 1st way --  returning by value:

#include <bits/stdc++.h>
using namespace std;

string getString() {
    string str = "Hello, World!";   
    return str;
}

int main() {
    string result = getString();
    cout << result << endl;
    return 0;
}

// 2nd way -- returning by reference:

#include <bits/stdc++.h>
using namespace std;

string& getString() {
    static string str = "Hello, World!";
    return str;
}

int main() {
    string& result = getString();
    cout << result << endl;
    return 0;
}

//3rd way --  Using char* (C-style string)

#include <bits/stdc++.h>
using namespace std;

const char* getString() {
    return "Hello, World!";
}

int main() {
    const char* result = getString();
    cout << result << endl;
    return 0;
}

// 4th way -- Using dynamically allocated C-style string:

#include <bits/stdc++.h>
using namespace std;

char* getString() {
    char* str = new char[14]; // Allocate memory for string
    strcpy(str, "Hello, World!");
    return str;
}

int main() {
    char* result = getString();
    cout << result << endl;
    delete[] result; // Don't forget to free the allocated memory
    return 0;
}

// 5th way -- Using std::string with an output parameter:

#include <bits/stdc++.h>
using namespace std;

void getString(string& str) {  // yaha heap me str me 'Hello, World' set ho jayega and main wale me bhee wahi reflect hoga due to reference.
    str = "Hello, World!";
}
int main() {
    string result;
    getString(result);
    cout << result << endl;
    return 0;
}
