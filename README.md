![](https://www.holbertonschool.com/holberton-logo.png)

# Printf()
The printf project is a collaboration between Diego López and Luis Chaparro, actual students of Software Engineering at Holberton School, were a function named "_printf" imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

------------

## File Functions

### _printf.c
Own Printf Function Tha Performs Formatted Output Conversion And Print Data.

------------

### holberton.h
Header File Were All Prototypes Are Saved

------------

### get_print_func.c
Pointer To A Function That Selects The Correct Function To Perform The Operation.

------------

### print_buf.c
Function That Prints The Buffer

------------

### handl_buf.c
Function That Concatenates The Buffer Characters

------------

### print_chr.c
Function That Writes The Character C To Stdout
```c
/* Indetifier : %c */
```

------------

### print_str.c
Function That Writes The String To Stdout
```c
/* Indetifier : %s */
```

------------

### print_int.c
Function That Prints An Integer
```c
/* Indetifier : %i or %d */
```

------------

### print_bnr.c
Function That Prints Decimal In Binary
```c
/* Indetifier : %b */
```

------------

### print_oct.c
Function That Prints Decimal In Octal
```c
/* Indetifier : %o */
```

------------

### print_hex.c
Function That Prints Decimal In Hexadecimal
```c
/* Indetifier : %x */
```

------------

### print_upx.c
Function That Prints Decimal In Uppercase Hexadecimal
```c
/* Indetifier : %X */
```

------------

### print_usr.c
Function That Prints A String And Values Of Non-Printed Chars
```c
/* Indetifier : %S */
```

------------

### print_unt.c
Function That Prints An Unsigned Integer
```c
/* Indetifier : %u */
```

------------

### print_rev.c
Function That Writes The String To Stdout In Reverse
```c
/* Indetifier : %r */
```

------------

### print_rot.c
Function That Writes The String To Stdout In Rot13
```c
/* Indetifier : %R */
```

------------

### print_add.c
Function That Prints The Address Of An Input Variable
```c
/* Indetifier : %p */
```

------------

### print_long_oct.c
Function That Prints Long Decimal Number In Octal
```c
/* Indetifier : %lo */
```

------------

### print_long_hex.c
Function That Prints Long Decimal Number In Hexadecimal
```c
/* Indetifier : %lx */
```

------------

### print_long_int.c
Function That Prints  A Long Integer
```c
/* Indetifier : %li */
```

------------

### print_long_upx.c
Function That Prints A Long Decimal In Uppercase Hexadecimal
```c
/* Indetifier : %lX */
```

------------

### print_long_unt.c
Function That Prints A Long Unsigned Integer
```c
/* Indetifier : %lu */
```

------------

### print_short_oct.c
Function That Prints Short Decimal Number In Octal
```c
/* Indetifier : %ho */
```

------------

### print_short_hex.c
Function That Prints Short Decimal Number In Hexadecimal
```c
/* Indetifier : %hx */
```

------------

### print_short_int.c
Function That Prints  A Short Integer
```c
/* Indetifier : %hi */
```

------------

### print_short_upx.c
Function That Prints A Short Decimal In Uppercase Hexadecimal
```c
/* Indetifier : %hX */
```

------------

### print_short_unt.c
Function That Prints A Short Unsigned Integer
```c
/* Indetifier : %hu */
```

------------

### print_num_hex.c
Function That Print A Number In Hexadecimal Begining With 0 And x
```c
/* Indetifier : %#x */
```

------------

### print_num_oct.c
Function That Prints A Number In Octal Begining With 0 And o
```c
/* Indetifier : %#o */
```

------------

### print_num_upx.c
Function That Prints A Number In Uppercase Hexadecimal
```c
/* Indetifier : %#X */
```

------------

### print_plus_int.c
Function That Prints An Integer With Plus Symbol
```c
/* Indetifier : %+i */
```

------------

### print_space_int.c
Function That Prints An Integer Begining With 0 And u
```c
/* Indetifier : % i */
```

------------

### ev_print_func.c
Function That Returns The Amount Of Indetifiers

------------

### main.c input code to test _printf.c
  	
	#include <limits.h>
	#include <stdio.h>
	#include "holberton.h"

	/**
 	* main - Entry point
 	*
 	* Return: Always 0
 	*/
	int main(void)
	{
		int len;
		int len2;
		unsigned int ui;
		void *addr;

		len = _printf("Let's try to printf a simple sentence.\n");
		len2 = printf("Let's try to printf a simple sentence.\n");

		ui = (unsigned int)INT_MAX + 1024;
		addr = (void *)0x7ffe637541f0;
		_printf("Length:[%d, %i]\n", len, len);
		printf("Length:[%d, %i]\n", len2, len2);
		_printf("Negative:[%d]\n", -762534);
		printf("Negative:[%d]\n", -762534);
		_printf("Unsigned:[%u]\n", ui);
		printf("Unsigned:[%u]\n", ui);
		_printf("Unsigned octal:[%o]\n", ui);
		printf("Unsigned octal:[%o]\n", ui);
		_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
		printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
		_printf("Character:[%c]\n", 'H');
		printf("Character:[%c]\n", 'H');
		_printf("String:[%s]\n", "I am a string !");
		printf("String:[%s]\n", "I am a string !");
		_printf("Address:[%p]\n", addr);
		printf("Address:[%p]\n", addr);
		len = _printf("Percent:[%%]\n");
		len2 = printf("Percent:[%%]\n");
		_printf("Len:[%d]\n", len);
		printf("Len:[%d]\n", len2);
		_printf("Unknown:[%r]\n");
		printf("Unknown:[%r]\n");
		return (0);
	}
	
------------

### main.c output to test _printf.c
	$ vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
	$ ./a.out
	$ Let's try to printf a simple sentence.
	$ Let's try to printf a simple sentence.
	$ Length:[39, 39]
	$ Length:[39, 39]
	$ Negative:[-762534]
	$ Negative:[-762534]
	$ Unsigned:[2147484671]
	$ Unsigned:[2147484671]
	$ Unsigned octal:[20000001777]
	$ Unsigned octal:[20000001777]
	$ Unsigned hexadecimal:[800003ff, 800003FF]
	$ Unsigned hexadecimal:[800003ff, 800003FF]
	$ Character:[H]
	$ Character:[H]
	$ String:[I am a string !]
	$ String:[I am a string !]
	$ Address:[0x7ffe637541f0]
	$ Address:[0x7ffe637541f0]
	$ Percent:[%]
	$ Percent:[%]
	$ Len:[12]
	$ Len:[12]
	$ Unknown:[%r]
	$ Unknown:[%r]

------------

### Authors
Diego Lopez and Luis Chaparro

------------

### End
