# Libft

## 1 - Description

`Libft` is a personal C library that **reimplements common standard library functions** (`string.h`, `ctype.h`, etc.) and provides **useful utilities** for 42 school projects.  

This project helps you:
-  Understand string manipulation in C  
-  Master dynamic memory management (`malloc`, `free`)  
-  Work with pointers and function pointers  
-  Follow strict 42 coding standards  

---

## Features

### Part 1: Recreated libc functions

| Function | Description |
|----------|-------------|
| `ft_strlen` | Returns the length of a string |
| `ft_strcpy` | Copies a string |
| `ft_strncmp` | Compares two strings up to `n` characters |
| `ft_isalpha` / `ft_isdigit` / `ft_isalnum` | Character checks |
| `ft_toupper` / `ft_tolower` | Converts character case |
| `ft_memset` / `ft_bzero` / `ft_memcpy` | Memory manipulation |
| `ft_calloc` | Allocates memory and initializes it to zero |
| `ft_strdup` | Duplicates a string |

### Part 2: Advanced string manipulation

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims unwanted characters from start and end |
| `ft_split` | Splits a string into an array of strings by a delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character and returns a new string |
| `ft_striteri` | Applies a function to each character (modifies the string in-place) |

### Part 3: Output functions

| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string with a newline |
| `ft_putnbr_fd` | Writes an integer as a string |
