![](https://www.holbertonschool.com/holberton-logo.png)

## printf()
The printf project is a collaboration between Diego López and Luis Chaparro, actual students of Software Engineering at Holberton School, were a function named "_printf" imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier
	
If the program runs successfully, the **return value** is the amount of chars printed.
	
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| p  | Pointer address  |
| r  | Reverse string of characters |
| R  | ROT13 translation of string |
| S  | String with special chars replaced by their ASCII value  |
| %  | Character  |

| Flags | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| +  | Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-). | i, d |
| (space) | Prints a blank space if the argument is a positive number | i, d |
| #  | Prints 0, 0x and 0X for o, x and X specifiers, respectively. It doesn't print anything if the argument is zero | o, x, X |

| Length | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| l | Prints a long int or unsigned long int | i, d, o, u, x and X |
| h | Prints a short int or unsigned short int | i, d, o, u, x and X |

------------

## Examples

1. Printing the string of chars "Hello, Holberton":
	+ Use: `_printf("Hello Hol%s.", "berton");`
	+ Output: `Hello Holberton.`
	
2. Printing an integer number:
	+ Use: `_printf("10 + 10 is equal to %d.", 20);`
	+ Output: `10 + 10 is equal to 20.`
	
3. Printing a binary, octal and hexadecimal:
	+ Use: `_printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]", 5, 5, 5);`
	+ Output: `10 in binary is [1010], in octal is [12] and in hexadecimal is [A]`
	
4. Printing a string codified in ROT13:
	+ Use: `_printf("Hello in ROT13 is %R", "Hello");`
	+ Output: `Hello in ROT13 is Urybb`

Using flags and length tags:

5. Printing the string of chars "Hello, Holberton":
	+ Use: `_printf("2 * 2 = %+d and 5 * -5 = %+i", 4, -25);`
	+ Output: `2 * 2 = +4 and 5 * -5 = -25`
	
6. Printing a long integer number and short integer number:
	+ Use: `_printf("1 million as a long int is %ld, but as a short int is %hd", 1000000, 1000000);`
	+ Output: `1 million as a long int is 1000000, but as a short int is 16960`


------------

## File Functions

### _printf.c
Own Printf Function Tha Performs Formatted Output Conversion And Print Data.

------------

### holberton.h
Header File Were All Prototypes Are Saved.

------------

### get_print_func.c
Pointer To A Function That Selects The Correct Function To Perform The Operation.

------------

### print_buf.c
Function That Prints The Buffer.

------------

### handl_buf.c
Function That Concatenates The Buffer Characters.

------------

### print_chr.c
Function That Writes The Character C To Stdout.
```c
/* Indetifier : %c */
```

------------

### print_str.c
Function That Writes The String To Stdout.
```c
/* Indetifier : %s */
```

------------

### print_int.c
Function That Prints An Integer.
```c
/* Indetifier : %i or %d */
```

------------

### print_bnr.c
Function That Prints Decimal In Binary.
```c
/* Indetifier : %b */
```

------------

### print_oct.c
Function That Prints Decimal In Octal.
```c
/* Indetifier : %o */
```

------------

### print_hex.c
Function That Prints Decimal In Hexadecimal.
```c
/* Indetifier : %x */
```

------------

### print_upx.c
Function That Prints Decimal In Uppercase Hexadecimal.
```c
/* Indetifier : %X */
```

------------

### print_usr.c
Function That Prints A String And Values Of Non-Printed Chars.
```c
/* Indetifier : %S */
```

------------

### print_unt.c
Function That Prints An Unsigned Integer.
```c
/* Indetifier : %u */
```

------------

### print_rev.c
Function That Writes The String To Stdout In Reverse.
```c
/* Indetifier : %r */
```

------------

### print_rot.c
Function That Writes The String To Stdout In Rot13.
```c
/* Indetifier : %R */
```

------------

### print_add.c
Function That Prints The Address Of An Input Variable.
```c
/* Indetifier : %p */
```

------------

### print_long_oct.c
Function That Prints Long Decimal Number In Octal.
```c
/* Indetifier : %lo */
```

------------

### print_long_hex.c
Function That Prints Long Decimal Number In Hexadecimal.
```c
/* Indetifier : %lx */
```

------------

### print_long_int.c
Function That Prints  A Long Integer.
```c
/* Indetifier : %li */
```

------------

### print_long_upx.c
Function That Prints A Long Decimal In Uppercase Hexadecimal.
```c
/* Indetifier : %lX */
```

------------

### print_long_unt.c
Function That Prints A Long Unsigned Integer.
```c
/* Indetifier : %lu */
```

------------

### print_short_oct.c
Function That Prints Short Decimal Number In Octal.
```c
/* Indetifier : %ho */
```

------------

### print_short_hex.c
Function That Prints Short Decimal Number In Hexadecimal.
```c
/* Indetifier : %hx */
```

------------

### print_short_int.c
Function That Prints  A Short Integer.
```c
/* Indetifier : %hi */
```

------------

### print_short_upx.c
Function That Prints A Short Decimal In Uppercase Hexadecimal.
```c
/* Indetifier : %hX */
```

------------

### print_short_unt.c
Function That Prints A Short Unsigned Integer.
```c
/* Indetifier : %hu */
```

------------

### print_num_hex.c
Function That Print A Number In Hexadecimal Begining With 0 And x.
```c
/* Indetifier : %#x */
```

------------

### print_num_oct.c
Function That Prints A Number In Octal Begining With 0 And o.
```c
/* Indetifier : %#o */
```

------------

### print_num_upx.c
Function That Prints A Number In Uppercase Hexadecimal.
```c
/* Indetifier : %#X */
```

------------

### print_plus_int.c
Function That Prints An Integer With Plus Symbol.
```c
/* Indetifier : %+i */
```

------------

### print_space_int.c
Function That Prints An Integer Begining With 0 And u.
```c
/* Indetifier : % i */
```

------------

### ev_print_func.c
Function That Returns The Amount Of Indetifiers.

------------

### Authors
Diego Lopez and Luis Chaparro.

------------

### End
