# CAT Command Implementation in C

This program is designed to imitate the implementation of the `cat` command using various system calls like `open()`, `close()`, `read()`, `write()`.
The program is completely written in `C`, and uses the default compiler for `FreeBSD` which uses the command `cc` to get compile.

## How to run the program

- Clone or download this repository
- Navigate to the directory and open it on terminal
- Compile the source code using `cc mycat.c`
- Change the name of the executable to mycat using the command `mv a.out mycat`
- Run the command `./mycat file1.txt file 2.txt file3.txt` - you can replace files with whatever files you would like
- open the latest file you provided as an argument.

## Flags, Functions, & System Calls

Functions
---------
- `open()`: The [open()](http://man7.org/linux/man-pages/man2/open.2.html) system call opens the file specified by file name. and takes a second argument of _flags_.
- `close()`: The [close()](http://man7.org/linux/man-pages/man2/close.2.html) system call closes the file after finishing I/O operation
- `read()`: [read()](http://man7.org/linux/man-pages/man2/read.2.html) reads up to an x number of bytes from a certain file into the buffer. A buffer has to be created first.
- `write()`: [write()](http://man7.org/linux/man-pages/man2/write.2.html) writes up to an x number bytes from the buffer starting at a certain point to the file referred to in the function declaration.

Flags
-----
- `O_RDONLY`: short for Read Only
- `O_CREAT`: this flag is used with the `open()` system call, and it creates the file if it was not existent.
- `O_WRONLY`: short for Write Only
- `O_APPEND`: this flag will modify the `open()` system call to open the file in the `append mode` so that text gets appended instead of replacing the existent text.
