# File Descriptors and Permissions

## Description

This project is an introduction to low-level file I/O in C using POSIX system calls: `open`, `close`, `read`, and `write`. No standard library functions (`printf`, `fopen`, etc.) are used — only raw syscalls and file descriptors.

## Learning Objectives

- Understand what a file descriptor is
- Know the three default file descriptors: `stdin` (0), `stdout` (1), `stderr` (2)
- Use the system calls `open`, `close`, `read`, `write`
- Understand flags: `O_RDONLY`, `O_WRONLY`, `O_RDWR`, `O_CREAT`, `O_APPEND`
- Handle file permissions with `chmod` values
- Understand why `open` returns `3` as the first available file descriptor

## Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of standard library I/O functions
- Betty coding style compliant

## Compilation

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
```

## Files

| File | Description |
|------|-------------|
| `main.h` | Header file — prototypes for all functions |
| `0-read_textfile.c` | Reads a text file and prints it to stdout |

## Tasks

### 0. Tread lightly, she is near

**Prototype:** `ssize_t read_textfile(const char *filename, size_t letters);`

Reads a text file and prints it to POSIX standard output.

- `letters` — number of letters to read and print
- Returns the actual number of letters read and printed
- Returns `0` if the file cannot be opened or read
- Returns `0` if `filename` is `NULL`
- Returns `0` if `write` fails or does not write the expected amount of bytes

**Usage:**
```bash
./a Requiescat
```
---

### 1. Under the snow

**Prototype:** `int create_file(const char *filename, char *text_content);`

Creates a file and writes text content to it.

- Returns `1` on success, `-1` on failure
- File permissions: `rw-------` (`0600`)
- If the file already exists, truncate it but do not change permissions
- If `filename` is `NULL` return `-1`
- If `text_content` is `NULL`, create an empty file

**Usage:**
```bash
./b hello world
```

---

### 2. Speak gently, she can hear

**Prototype:** `int append_text_to_file(const char *filename, char *text_content);`

Appends text at the end of a file.

- Returns `1` on success, `-1` on failure
- Does not create the file if it does not exist
- If `filename` is `NULL` return `-1`
- If `text_content` is `NULL`, return `1` if file exists, `-1` otherwise

**Usage:**
```bash
./c hello " World!"
```

---

### 3. cp

A program that copies the content of a file to another file.

- Usage: `cp file_from file_to`
- Exit code `97` if wrong number of arguments
- Exit code `98` if `file_from` cannot be read
- Exit code `99` if `file_to` cannot be written
- Exit code `100` if a file descriptor cannot be closed
- File permissions of created file: `rw-rw-r--` (`0664`)
- Reads 1024 bytes at a time using a buffer

**Usage:**
```bash
./cp incitatous Incitatous
```


## How It Works

```
open(filename)  →  fd (e.g. 3)
      ↓
read(fd, buf, letters)  →  r bytes read
      ↓
write(STDOUT_FILENO, buf, r)  →  w bytes written
      ↓
close(fd)
return w
```

## Author

Sagal — [Holberton School](https://www.github.com/sagalou)