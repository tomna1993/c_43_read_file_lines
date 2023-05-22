# c_43_read_file_lines

## DESCRIPTION

This program reads a formatted file (string,string\n) and print the two strings in terminal.

### File Pointer in C

A file pointer is a reference to a particular position in the opened file. It is used in file handling to perform all file operations such as read, write, close, etc. We use the **FILE** macro to declare the file pointer variable. The **FILE** macro is defined inside **<stdio.h>** header file.

#### Syntax of File Pointer

```c
FILE* pointer_name;
```

File Pointer is used in almost all the file operations in C.

### Open a File in C

For opening a file in C, the **fopen()** function is used with the filename or file path along with the required access modes.

#### Syntax of fopen()

```c
FILE* fopen(const char *file_name, const char *access_mode);
```

#### Parameters

- file_name: name of the file when present in the same directory as the source file. Otherwise, full path.
- access_mode: Specifies for what operation the file is being opened.

#### Return Value

- If the file is opened successfully, returns a file pointer to it.
- If the file is not opened, then returns NULL.

#### File opening modes in C

File opening modes or access modes specify the allowed operations on the file to be opened. They are passed as an argument to the fopen() function. Some of the commonly used file access modes are listed below:

| Opening Modes | Description |
|---------------|-------------|
| r | Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the first character in it. If the file cannot be opened fopen( ) returns NULL. |
| rb | Open for reading in binary mode. If the file does not exist, fopen( ) returns NULL. |
| w | Open for reading in text mode. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. |
| wb | Open for writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created. |
| a | Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. |
| ab | Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be created. |
| r+ | Searches file. It is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the first character in it. Returns NULL, if unable to open the file. |
| rb+ | Open for both reading and writing in binary mode. If the file does not exist, fopen( ) returns NULL. |
| w+ | Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created. Returns NULL, if unable to open the file. |
| wb+ | Open for both reading and writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created. |
| a+ | Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. |
| ab+ | Open for both reading and appending in binary mode. If the file does not exist, it will be created. |

As given above, if you want to perform operations on a binary file, then you have to append ‘b’ at the last. For example, instead of “w”, you have to use “wb”, instead of “a+” you have to use “a+b”.

### Reading from a File

The file read operation in C can be performed using functions **fscanf()** or **fgets()**. Both the functions performed the same operations as that of **scanf** and **gets** but with an additional parameter, the file pointer. There are also other functions we can use to read from a file. Such functions are listed below:

| Function | Description |
|-|-|
| fscanf() | Use formatted string and variable arguments list to take input from a file. |
| fgets() | Input the whole line from the file. |
| fgetc() | Reads a single character from the file. |
| fgetw() | Reads a number from a file. |
| fread() | Reads the specified bytes of data from a binary file. |

So, it depends on you if you want to read the file line by line or character by character.

The **getc()** and some other file reading functions return **EOF** (End Of File) when they reach the end of the file while reading. **EOF** indicates the end of the file and its value is implementation-defined.

_Note: One thing to note here is that after reading a particular part of the file, the file pointer will be automatically moved to the end of the last read character._

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
