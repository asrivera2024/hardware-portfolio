## Week 1 — 10/04/2026

**Goal:** 
Today I wanted to get a better understanding of the basics for Clang.
From basic syntax like loops and structs, then working with memory addresses. 
Like pointers, dereferencing, malloc()/free() and making 2D jagged arrays with double pointers.

**What I built:**
A small collection of c code in files relating to the basics
 array_pointers.c
 func_arg.c
 hello_world.c
 int_pointer.c
 struct_size.c

**What broke:**
There was an error that kept occurring when I tried to print a pointers address with %p.
When reading through the man pages for printf I was sure that this was the conversion specifier but the file refused to compile. 

**What I learned:**
Looking into the error messages gcc provides is key to getting insight on fixing issues.
The error blocking my path was data type warning about pointers of void * type.
By typecasting with this type (void *) I was able to convert the pointer into one that could print and be read in output.
The reason this was an issue so persistent was because I am currently using the -Werror=format flag to learn good practice.

**What I'd do differently:**
I would take a closer look into compiler errors that hind at what the issue is.

**Artifacts:**
- [Array Pointers](../c-exercises/week-01/array_pointers.c)
- [Int Pointer](../c-exercises/week-01/int_pointer.c)
- [Function Argument](../c-exercises/week-01/func_arg.c)
- [CString-Array](../c-exercises/week-01/cstring_array.c)
