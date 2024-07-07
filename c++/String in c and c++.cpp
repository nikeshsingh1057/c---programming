			// In C, there are primarily two ways to declare and work with strings:

### 1. **C-Style String (Character Array)**

A C-style string is an array of characters terminated by a null character (`'\0'`). It is the most basic way to handle strings in C.

**Declaration:**

```c
char myString[] = "Hello, World!";
```

- `myString` is an array of characters initialized with the string `"Hello, World!"`.
- The size of the array is automatically adjusted to fit the string and the null terminator.

**Modification:**

You can modify a C-style string if it is declared as an array:

```c
char myString[] = "Hello, World!";
myString[0] = 'h';  // Changes 'Hello' to 'hello'
```

### 2. **Pointer to a String Literal**

A pointer to a string literal points to a constant array of characters. String literals are stored in read-only memory, so you should not modify them.

**Declaration:**

```c
const char *myString = "Hello, World!";
```

- `myString` is a pointer to a constant character array.
- The string literal `"Hello, World!"` is stored in read-only memory.

**Modification:**

You should not attempt to modify a string literal:

```c
const char *myString = "Hello, World!";
// myString[0] = 'h';  // Undefined behavior: attempting to modify a string literal
```

/* Summary

- **C-Style String (Character Array):** A mutable array of characters with automatic memory management.
- **Pointer to a String Literal:** An immutable pointer to a string literal stored in read-only memory.

These are the primary ways to declare and work with strings in C. For more advanced string handling, you would typically use 
the standard library functions from `<string.h>` to manipulate C-style strings.
*/

/*

In C++, you can handle strings in several ways, each with its own characteristics and use cases. Here are the primary methods:

1. std::string Class
The std::string class from the Standard Library is the most commonly used and versatile way to work with strings in C++.

2. c sytle wala .
*/



#include <stdio.h>
int main()
{
     char* ptr = "Geekasdasdfasdfasdfas";
     printf("%c,%c", *ptr,*(ptr+1)); //%s ,ptr se pura print ho jayega.
     return 0;
}

/* hum jante hai c me char me he string store karte hai ya pointer me bhee le skte hai but ptr me G ka address aayega bas uske next ko print
   karne ke liye ptr++ and * lagana hoga */
