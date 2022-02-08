# Compiler

## 1.1 code analysis

## 1.2 execution result

```bash
# make is a tool that knows how to build C programs (and many other languages).
$ make ex1
cc    ex1.c   -o ex1
$ ./ex1
```

## 1.3 break the program

## 1.4 try more

### [man 3 printf](https://man7.org/linux/man-pages/man3/printf.3.html)
  
#### NAME


#### SYNOPSIS


#### DESCRIPTION

The functions in the printf() family produce output according to a format as described below.

The functions printf(), and vprintf() write output to stdout, the standard output stream;

fprintf() and vfprintf() write output to the given output stream;

sprintf(), snprintf(), vsprintf(), and vsnprintf() write to the character string str.

The function dprintf() is the same as fprintf() except that it outputs to a file descriptor, fd, instead of to a stdio(3) stream.

The functions snprintf() and vsnprintf() write at most size bytes(including the terminating null byte ('\n')) to str.

The functions vprintf(), vfprintf(), vdprintf(), vsprintf(), vsnprintf() are equivalent to
the functions printf(), fprintf(), dprintf(), sprintf(), snprintf(), respectively,
except that they are called with a va_list instead of a variable number of arguments.

These functions do not call the va_end macro.
Because they invoke the va_arg macro, the value of ap is undefined after the call.  See stdarg(3).


##### Format of the format string

Each conversion specification is introduced by the character %, and ends with a *conversion specifier*.
In between there may be (in this order)
zero or more *flags*,
an optional minimum *field width*,
an optional *precision* and
an optional *length modifier*.

The overall syntax of a conversion specification is:

	%[$][flags][width][.precision][length modifier]conversion


##### Flag characters

The character % is followed by zero or more of the following flags:

	#
	The value should be converted to an "alternate form".
	For o conversions, the first character of the output string is made zero (by prefixing a 0 if it was not zero already).
	For x and X conversions, a nonzero result has the string "0x"a(or "0X" for X conversions) prepended to it.
	For a, A, e, E, f, F, g, and G conversions, the result will always contain a decimal point, even if no ditis follow it
	(normally, a decimal point appears in the results of those conversions only ifa digit follows). For g and G conversions,
	trailing zeros are not removed from the result as they would otherwise be.
	For other conversions, the result is undefined.

	0
	The value should be zero padded.

	If the 0 and - flags both appear, the 0 flag is ignored.
	If a precision is given with a numeric conversion (d, i, o, u, x, and X), the 0 flag is ingnored.
	For other conversions, the behavior is undefined.

	-
	The converted value is to be left adjusted on the field boundary. (The default is right justification.)
	The converted value is padded on the right with blanks, rather than on the left with blanks or zeros.
	A - overrides a 0 if both are given.

	' '
	(a space) A blank should be left before a positive number (or empty string) produced by a signed conversion.

	+
	A sign (+ or -) should always be placed before a number produced by a sigend conversion.
	By default, a sign is used only for negative numbers. A + overrides a space if both are used.


##### Field width

An optional decimal digit string (with nonzero first digit) specifying a minimum field width.



##### Precision

An optional precision, in the form of a period ('.') followed by an optional decimal digit string.

This gives
the minimum number of digits to appear for d, i, o, u, x, and X conversions,
the number of digits to appear after the radix character for a, A, e, E, f, and F conversions,
the maximum number of significant digits for g and G conversions, or
the maximum number of charactoers to be printed from a string for s and S conversions.


##### Length modifier

Here, "integer conversion" stands for d, i, o, u, x, or X conversion.


hh

*signed char* or *unsigned char*


h

*short* or *unsigned short*


l

*long* or *unsigned long*


ll

*long long* or *unsigned long long*

 
q


L

A following a, A, e, E, f, F, g, or G conversion corresponds to a *long double* argument.


j


z

*size_t* or *ssize_t*


Z


t


##### Conversion specifiers

A character that specifies the type of conversion to be applied.


d, i

The *int* argument is converted to signed decimal notation.


o, u, x, X

The *unsigned int* argument is converted to
unsigned octal(o),
unsigned decimal(u), or
unsigned hexadecimal (x and X) notation.


e, E

The *double* argument is rounded and converted in the style
[-]d.ddde±dd where there is one digit (which is nonzero if the argument is nonzero) before the decimal-point character
and the number of digits after it is equal to the precision;
if the precision is missing, it is taken as 6;


f, F

The *double* argument is rounded and converted to decimal notation in the style [-]ddd.ddd


g, G

The *double* argument is converted in style f or e (or F or E for G conversions).


a, A

For a conversion, the *double* argument is converted to hexadecimal notation (using the letters abcdef)
in the style [-]0xh.hhhhp±d;
the exponent separator P is used.


c

If no l modifier is present, the *int* argument is converted to an *unsigned char*, and the resulting character is written.


s

If no l modifier is present: the *const char \** argument is expected to be a pointer to an array of character type \* (pointer to a string).
Characters from the array are written up to (but not including) a terminating null byte ('\0')


C

Don't use.


S

Don't use.


p

The *void \** pointer argument is printed in hexadecimal \*(as if by %#x or %#lx).


n

The number of characters written so far is stored into the integer pointed to by the corresponding argument.


m


%

A '%' is written. No argument is converted.




#### RETURN VALUE
