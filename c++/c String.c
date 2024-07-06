#include <stdio.h>

int main()
{

	char* ptr = "Geekasdasdfasdfasdfas";
	printf("%c,%c", *ptr,*(ptr+1));
    return 0;
}

/* hum jante hai c me char me he string store karte hai ya pointer me bhee le skte hai but ptr me G ka address aayega bas uske next ko print
   karne ke liye ptr++ and * lagana hoga */
