# CAT Command Implementation in C

This program is designed to imitate the implementation of the `cat` command using various system calls like `open()`, `close()`, `read()`, `write()`.
The program is completely written in `C`, and uses the default compiler for `FreeBSD` which uses the command `cc` to get compile.

## How to run the program

- Clone or download this repository
- Navigate to the directory and open it on terminal
- Compile the source code using `cc mycat.c`
- Change the name of the executable to mycat using the command `mv a.out mycat`
- Run the command `./mycat file1.txt file 2.txt file3.txt` - you can replace files with whatever files you would like

System Calls
------------
- `open()`: The [open()](http://man7.org/linux/man-pages/man2/open.2.html) system call opens the file specified by file name. and takes a second argument of _flags_.
- `close()`: The [close()](http://man7.org/linux/man-pages/man2/close.2.html) system call closes the file after finishing I/O operation
- `read()`: [read()](http://man7.org/linux/man-pages/man2/read.2.html) reads up to an x number of bytes from a certain file into the buffer. A buffer has to be created first.
- `write()`: [write()](http://man7.org/linux/man-pages/man2/write.2.html) writes up to an x number bytes from the buffer starting at a certain point to the file referred to in the function declaration.
- `perror()`: [perror()](http://man7.org/linux/man-pages/man3/perror.3.html) prints a system error message.

Flags
-----
- `O_RDONLY`: short for Read Only

Experiment
----------
Here is a list of commands to try:
- `./mycat file1.txt file2.txt file3.txt`
- `./mycat file100.txt`
- `./mycat`
- `./mycat file1 | grep string1`
