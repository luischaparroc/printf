# Printf()

![](https://www.holbertonschool.com/holberton-logo.png)

**TABLE OF CONTENTS**

[TOCM]

[TOC]

#_printf.c
OWN PRINTF FUNCTION THA PERFORMS FORMATTED OUTPUT CONVERSION AND PRINT DATA.
##holberton.h
HEADER FILE WERE ALL PROTOTYPES ARE SAVED
##get_print_func.c
POINTER TO A FUNCTION THAT SELECTS THE CORRECT FUNCTION TO PERFORM THE OPERATION.
###print_buf.c
FUNCTION THAT PRINTS THE BUFFER
###handl_buf.c
FUNCTION THAT CONCATENATES THE BUFFER CHARACTERS
####print_chr.c
FUNCTION THAT WRITES THE CHARACTER C TO STDOUT
```c
/* Indetifier : %c */
```
####print_str.c
FUNCTION THAT WRITES THE STRING TO STDOUT
```c
/* Indetifier : %s */
```
####print_int.c
FUNCTION THAT PRINTS AN INTEGER
```c
/* Indetifier : %i or %d */
```
####print_bnr.c
FUNCTION THAT PRINTS DECIMAL IN BINARY
```c
/* Indetifier : %b */
```
####print_oct.c
FUNCTION THAT PRINTS DECIMAL IN OCTAL
```c
/* Indetifier : %o */
```
####print_hex.c
FUNCTION THAT PRINTS DECIMAL IN HEXADECIMAL
```c
/* Indetifier : %x */
```
####print_upx.c
FUNCTION THAT PRINTS DECIMAL IN UPPERCASE HEXADECIMAL
```c
/* Indetifier : %X */
```
####print_usr.c
FUNCTION THAT PRINTS A STRING AND VALUES OF NON-PRINTED CHARS
```c
/* Indetifier : %S */
```
####print_unt.c
FUNCTION THAT PRINTS AN UNSIGNED INTEGER
```c
/* Indetifier : %u */
```
####print_rev.c
FUNCTION THAT WRITES THE STRING TO STDOUT IN REVERSE
```c
/* Indetifier : %r */
```
####print_rot.c
FUNCTION THAT WRITES THE STRING TO STDOUT IN ROT13
```c
/* Indetifier : %R */
```
####print_add.c
FUNCTION THAT PRINTS THE ADDRESS OF AN INPUT VARIABLE
```c
/* Indetifier : %p */
```
####print_long_oct.c
FUNCTION THAT PRINTS LONG DECIMAL NUMBER IN OCTAL
```c
/* Indetifier : %lo */
```
####print_long_hex.c
FUNCTION THAT PRINTS LONG DECIMAL NUMBER IN HEXADECIMAL
```c
/* Indetifier : %lx */
```
####print_long_int.c
FUNCTION THAT PRINTS  A LONG INTEGER
```c
/* Indetifier : %li */
```
####print_long_upx.c
FUNCTION THAT PRINTS A LONG DECIMAL IN UPPERCASE HEXADECIMAL
```c
/* Indetifier : %lX */
```
####print_long_unt.c
FUNCTION THAT PRINTS A LONG UNSIGNED INTEGER
```c
/* Indetifier : %lu */
```
####print_short_oct.c
FUNCTION THAT PRINTS SHORT DECIMAL NUMBER IN OCTAL
```c
/* Indetifier : %ho */
```
####print_short_hex.c
FUNCTION THAT PRINTS SHORT DECIMAL NUMBER IN HEXADECIMAL
```c
/* Indetifier : %hx */
```
####print_short_int.c
FUNCTION THAT PRINTS  A SHORT INTEGER
```c
/* Indetifier : %hi */
```
####print_short_upx.c
FUNCTION THAT PRINTS A SHORT DECIMAL IN UPPERCASE HEXADECIMAL
```c
/* Indetifier : %hX */
```
####print_short_unt.c
FUNCTION THAT PRINTS A SHORT UNSIGNED INTEGER
```c
/* Indetifier : %hu */
```
##main.c input code to test _printf.c
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
##main.c output to test _printf.c
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

                
###FlowChart

```flow
st=>start: main.c
op=>operation: _printf.c
cond=>condition: get_print_func.c
e=>end: To admin

st->op->cond
cond(yes)->e
cond(no)->op
```

###Sequence Diagram
                    
```seq
Andrew->China: Says Hello 
Note right of China: China thinks\nabout it 
China-->Andrew: How are you? 
Andrew->>China: I am good thanks!
```

###Authors
Diego Lopez and Luis Chaparro

###End
