# C++ Tutorial (Code Snippets)

## Multiple File Program

### Files used:
>add.h
>add.cc
>main.cc

The [main.cc](main.cc) file contains the main function that initiates a c++ program.
In this file we call the `addnumbers(int a, int b)` function defined in [add.cc](add.cc).
This function is forward declared in [main.cc](main.cc) by [add.h](add.h).

```H
#ifndef _ADD_H
#define _ADD_H
int addnumbers(int a, int b);
#endif
```

The `#ifndef _ADD_H` checks if a header file has been defined.
If not already defined, `#define _ADD_H` defines it has `int addnumbers(int a, int b);`
And lastly, `#endif` indicates close of operation.

## POINTERS

>a variable that stores the memory address as its value

```C++
int* ptr =  &a;
```
The above makes a variable `ptr` store the memory address of the variable `a`.

```C++
cout << ptr << endl;
```

The above prints out the memory address of `a` as stored by `ptr`.

```C++
cout << *ptr << endl;
```

The above prints out the actual value of `a` as stored by `ptr`.