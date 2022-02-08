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

	$[$][flags][width][.precision][length modifier]conversion


##### Flag characters

The character % is followed by zero or more of the following flags:

	#
	The value
