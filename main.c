#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>
#include <string.h>
/*
void print_char(unsigned int index, char *c)
{
		printf(" %u : %c \n", index, *c);
}


char transform_char(unsigned int index, char c)
{
	if (index % 1 == 0)
		return (c + 1);
	return (c + 1);
}
*/

int main()
{
/*
printf("// ****************************** ft_atoi ******************************* \\\\ \n");

	char	str[]="+1323";
	printf("ft : %d \n", ft_atoi(str));
	printf("og : %d \n", atoi(str));


printf("// ****************************** ft_bzero ******************************* \\\\ \n");

	int	array[] = {54, 85, 20, 64, 37};
	size_t size = sizeof (int) * 5;
	int	length = 0;

	ft_bzero(array, size);
	while (length < 5)
	{
		printf(" %d ", array[length]);
		length ++;
	}
	printf(": ft\n");
	bzero(array, size);
	length = 0;
	while (length < 5)
	{
		printf(" %d ", array[length]);
		length ++;
	}
	printf(": og\n");


printf("// ****************************** ft_calloc ******************************* \\\\ \n");

	int	*arr;
	int	n = 8;
	int i = 0;

	arr = (int *)calloc(n, sizeof(int));
	if (arr == NULL)
		return (1);
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);


printf("// ****************************** ft_isalnum ******************************* \\\\ \n");

	printf("ft '-': %d \n", ft_isalnum('-'));
	printf("og '-': %d \n", isalnum('-'));
	printf("ft '3': %d \n", ft_isalnum('3'));
	printf("og '3': %d \n", isalnum('3'));
	printf("ft 'a': %d \n", ft_isalnum('a'));
	printf("og 'a': %d \n", isalnum('a'));


printf("// ****************************** ft_isalpha ******************************* \\\\ \n");

	printf("ft '-': %d \n", ft_isalpha('-'));
	printf("og '-': %d \n", isalpha('-'));
	printf("ft '3': %d \n", ft_isalpha('3'));
	printf("og '3': %d \n", isalpha('3'));
	printf("ft 'a': %d \n", ft_isalpha('a'));
	printf("og 'a': %d \n", isalpha('a'));


printf("// ****************************** ft_isascii ******************************* \\\\ \n");

	printf("ft '-': %d \n", ft_isascii('-'));
	printf("og '-': %d \n", isascii('-'));
	printf("ft '3': %d \n", ft_isascii('3'));
	printf("og '3': %d \n", isascii('3'));
	printf("ft 'a': %d \n", ft_isascii('a'));
	printf("og 'a': %d \n", isascii('a'));


printf("// ****************************** ft_isdigit ******************************* \\\\ \n");

	printf("ft '-': %d \n", ft_isdigit('-'));
	printf("og '-': %d \n", isdigit('-'));
	printf("ft '3': %d \n", ft_isdigit('3'));
	printf("og '3': %d \n", isdigit('3'));
	printf("ft 'a': %d \n", ft_isdigit('a'));
	printf("og 'a': %d \n", isdigit('a'));


printf("// ****************************** ft_isprint ******************************* \\\\ \n");

	printf("ft '-': %d \n", ft_isprint('-'));
	printf("og '-': %d \n", isprint('-'));
	printf("ft '3': %d \n", ft_isprint('3'));
	printf("og '3': %d \n", isprint('3'));
	printf("ft 'a': %d \n", ft_isprint('a'));
	printf("og 'a': %d \n", isprint('a'));


printf("// ****************************** ft_memchr ******************************* \\\\ \n");

	char	str[]="Bonjour";
	char	*ptr;

	ptr = (char *)ft_memchr(str, 'b', strlen(str));
	printf("ft : %ld \n", ptr - str);
	ptr = (char *)memchr(str, 'b', strlen(str));
	printf("og : %ld \n", ptr - str);


printf("// ****************************** ft_memcmp ******************************* \\\\ \n");

	char s1[]="-Bonjour24";
	char s2[]="-Bonjour24";
	printf("ft : %d \n", ft_memcmp(s1, s2, 50));
	printf("og : %d \n", memcmp(s1, s2, 50));


printf("// ****************************** ft_memcpy ******************************* \\\\ \n");

	char src[] = "Bonjour tout le m0nde!";
	char dest[40];

	ft_memcpy(dest, src, strlen(src) + 1);
	printf("ft : %s \n", dest);
	memcpy(dest, src, strlen(src) + 1);
	printf("og : %s \n", dest);


printf("// ****************************** ft_memmove ******************************* \\\\ \n");

	char src[] = "Bonjour tout le m0nde!";
	char dest[40] = "Bonjour t";
	size_t len = strlen(src) + 1;

	ft_memmove(dest, src, len);
	printf("ft : %s \n", dest);
	memmove(dest, src, len);
	printf("og : %s \n", dest);


printf("// ****************************** ft_memset ******************************* \\\\ \n");

	int	array[] = {54, 85, 20, 64, 37};
	size_t size = sizeof (int) * 5;
	int	length = 0;

	ft_memset(array, 0, size);
	while (length < 5)
	{
		printf(" %d ", array[length]);
		length ++;
	}
	printf(": ft\n");
	memset(array, 0, size);
	length = 0;
	while (length < 5)
	{
		printf(" %d ", array[length]);
		length ++;
	}
	printf(": og\n");


printf("// ****************************** ft_strchr ******************************* \\\\ \n");

	const char	s[]="teste";
	int c = 'e' + 256;
	printf("ft : %s \n", ft_strchr(s, c));
	printf("og : %s \n", strchr(s, c));


printf("// ****************************** ft_strdup ******************************* \\\\ \n");

	printf("ft : %s \n", ft_strdup("Hello every0ne!"));
	printf("og : %s \n", strdup("Hello every0ne!"));


printf("// ****************************** ft_strlcat ******************************* \\\\ \n");

	char	d[7]="bonjour";
	const char	s[]=" tout le monde";
	size_t	size = sizeof(d);

	ft_strlcat(d, s, size);
	printf("ft : %s \n", d);
	printf("ft : %zu \n", ft_strlcat(d, s, size));
	strlcat(d, s, size);
	printf("og : %s \n", d);
	printf("og : %zu \n", strlcat(d, s, size));


printf("// ****************************** ft_isalnum ******************************* \\\\ \n");

	char	d[5]="Hi";
	const char	s[]="Bonjour tout le monde";
	size_t	size = sizeof(d);
	ft_strlcpy(d, s, size);
	printf("ft : %s \n", d);
	printf("ft : %zu \n", ft_strlcpy(d, s, size));
	strlcpy(d, s, size);
	printf("og : %s \n", d);
	printf("og : %zu \n", strlcpy(d, s, size));


printf("// ****************************** ft_strlen ******************************* \\\\ \n");

	char	a[]={'b','o','n','j','o','u','r','\0'};
	char	b[]=“Bonjour”;

	printf("ft : %zu \n", ft_strlen(a));
	printf("og : %zu \n\n”, strlen(a));
	printf("ft : %zu \n", ft_strlen(b));
	printf("og : %zu \n", strlen(b));


printf("// ****************************** ft_strncmp ******************************* \\\\ \n");

	char s1[]="-Bonjour a ";
	char s2[]="-Bonjour a ";
	printf("ft : %d \n", ft_strncmp(s1, s2, 50));
	printf("og : %d \n", strncmp(s1, s2, 50));


printf("// ****************************** ft_strnstr ******************************* \\\\ \n");

	char	str[] = "Bonjour bag croissant baguette bye";
	char	to_find[] = "baguette";
	char	to_find1[] = "bag";
	char	to_find2[] = "pain";
	size_t	len = 40;
	printf("og : %s \n", ft_strnstr(str, to_find, len));
	printf("ft : %s \n", strnstr(str, to_find, len));
	printf("og : %s \n", ft_strnstr(str, to_find1, len));
	printf("ft : %s \n", strnstr(str, to_find1, len));
	printf("og : %s \n", ft_strnstr(str, to_find2, len));
	printf("ft : %s \n", strnstr(str, to_find2, len));


printf("// ****************************** ft_strrchr ******************************* \\\\ \n");

	const char	s[]="Bonjour";
	int c = 127;
	printf("ft : %s \n", ft_strrchr(s, c));
	printf("og : %s \n", strrchr(s, c));


printf("// ****************************** ft_tolower ******************************* \\\\ \n");

	printf("ft '-': %d \n", ft_tolower('-'));
	printf("og '-': %d \n", tolower('-'));
	printf("ft '3': %d \n", ft_tolower('3'));
	printf("og '3': %d \n", tolower('3'));
	printf("ft 'a': %d \n", ft_tolower('a'));
	printf("og 'a': %d \n", tolower('a'));
}
printf("// ****************************** ft_toupper ******************************* \\\\ \n");

	printf("ft '-': %d \n", ft_toupper('-'));
	printf("og '-': %d \n", toupper('-'));
	printf("ft '3': %d \n", ft_toupper('3'));
	printf("og '3': %d \n", toupper('3'));
	printf("ft 'a': %d \n", ft_toupper('a'));
	printf("og 'a': %d \n", toupper('a'));


printf("// ****************************** ft_substr ******************************* \\\\ \n");

	char const *s = "Bonjour tout le monde";
	unsigned int start = 7;
	size_t len = 12;
	printf("%s\n", s);
	printf("start = %d, len = %zu : %s\n", start, len, ft_substr(s, start, len));


printf("// ****************************** ft_strjoin ******************************* \\\\ \n");

	const char *s1 = "Bonjour, ";
	const char *s2 = "tout le monde!";
	char *result = ft_strjoin(s1, s2);

	if (result == NULL)
		return 1;
	printf("%s\n", result);
	free (result);


printf("%s", "// ****************************** ft_strtrim ******************************* \\\\ \n");

	char const *s1 = "ababaaaMy name is Juliettebababbab";
	char const *s2 = "ab";
	
	printf("s1 : %s \n", s1);
	printf("set : %s \n", s2);
	printf("ft : %s \n", ft_strtrim(s1, s2));


printf("// ****************************** ft_split ******************************* \\\\ \n");

	char const *s = "Bonjour-tout-le-monde";
	char		**result = ft_split(s, '-');
	if (result == NULL)
		printf("Allocation error\n");
	while (*result)
	{
		printf("%s \n", *result);
		free(*result);
		result++;
	}
	free(*result);
	return 0;
	

printf("// ****************************** ft_itoa ******************************* \\\\ \n");




printf("// ****************************** ft_strmapi ******************************* \\\\ \n");

	char const *s = "bonjour tout le monde 123";
	char *result = ft_strmapi(s, &transform_char); //char + 1

	if (result == NULL)
		return(0);
	printf("%s\n", s);
	printf("%s\n", result);


printf("%s", "// ****************************** ft_striteri ******************************* \\\\ \n");

	char str[] = "Hi everyone!";

	printf("%s\n", str);
	ft_striteri(str, &print_char);


printf("// ****************************** ft_putchar_fd ******************************* \\\\ \n");

	int fd = open ("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // O_CREAT : create files if not existing, O_TRUNC : clean, 0644 : owner can read and write and other only read
	if (fd == -1)
		return 0;
	char c = 'A';
	ft_putchar_fd(c, fd);
	close (fd);


printf("// ****************************** ft_putstr_fd ******************************* \\\\ \n");

	int fd = open ("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // O_CREAT : create files if not existing, O_TRUNC : clean, 0644 : owner can read and write and other only read
	if (fd == -1)
		return 0;
	char c = "Bonjour tout le m0nde!";
	ft_putstr_fd(c, fd);
	close (fd);


printf("// ****************************** ft_putendl_fd ******************************* \\\\ \n");

	int fd = open ("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // O_CREAT : create files if not existing, O_TRUNC : clean, 0644 : owner can read and write and other only read
	if (fd == -1)
		return 0;
	char c = "Bonjour tout le m0nde!";
	ft_putendl_fd(c, fd);
	close (fd);


printf("// ****************************** ft_putnbr_fd ******************************* \\\\ \n");

	int fd = open ("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return 0;
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(2147483647, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-12345, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(0, fd);
	close (fd);

*/
	return 0;
}
