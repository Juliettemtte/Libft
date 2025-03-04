<h1 align="center">
	Libft
</h1>
<p align="center">
	<b><i>Your very first own library</i></b><br>
</p>

---

## 💡 About the project

> This project is about coding a C library.
It will contain a lot of general purpose functions your programs will rely upon.


## Mandatory part

### Libc functions
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr 
• atoi 

### Additional functions
• substr 
• strjoin 
• strtrim 
• split 
• itoa 
• strmapi 
• striteri 
• putchar_fd 
• putstr_fd 
• putendl_fd 
• putnbr_fd 

### Bonus part
```C
typedef struct  s_list
{
  void           *content;
  struct s_list  *next;
}               t_list;
```

• lstnew 
• lstadd_front 
• lstsize 
• lstlast 
• lstadd_back 
• lstdelone 
• lstclear 
• lstiter 
• lstmap

## 🛠️ Compilation

### Requirements

The function is written in C language and thus needs the **`cc` compiler** and some standard **C libraries** to run.

### Instructions

To use the function in your code, simply include its header:

```C
#include "libft.h"
```
