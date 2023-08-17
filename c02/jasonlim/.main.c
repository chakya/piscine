#include <stdio.h>
#include <string.h>
#include "./ex00/ft_strcpy.c"
#include "./ex01/ft_strncpy.c"
#include "./ex02/ft_str_is_alpha.c"
#include "./ex03/ft_str_is_numeric.c"
#include "./ex04/ft_str_is_lowercase.c"
#include "./ex05/ft_str_is_uppercase.c"
#include "./ex06/ft_str_is_printable.c"
#include "./ex07/ft_strupcase.c"
// #include "./ex08/ft_strlowcase.c"

void	main(void)
{
	char *src="hello!";
	char dest[strlen(src)];
	printf("e00:\n initial: src:%s dest:%s\n",src,dest);
	ft_strcpy(dest,src);
	printf(" after function initial: src:%s dest:%s\n\n",src,dest);

	char dest2[strlen(src)];
	printf("e01:\n initial: src:%s dest:%s\n",src,dest2);
	ft_strncpy(dest2,src,2);
	printf(" after function initial: src:%s dest:%s\n\n",src,dest2);
	ft_strncpy(dest2,src,10);
	printf(" after function initial: src:%s dest:%s\n\n",src,dest2);

	printf("e02:\n 1=%i\n",ft_str_is_alpha("sdafadjsaklSKDJKSLf"));
	printf(" 0=%i\n",ft_str_is_alpha("sdafa20"));
	printf(" 0=%i\n",ft_str_is_alpha("sldjakjfl$*(as()"));


	printf("e03:\n 1=%i\n",ft_str_is_numeric("20"));
	printf(" 0=%i\n",ft_str_is_numeric("20dak"));
	printf(" 0=%i\n",ft_str_is_numeric("20.-"));
	printf(" 0=%i\n",ft_str_is_numeric("20.-"));
	printf(" 0=%i\n",ft_str_is_numeric("\n"));


	printf("ex04:\n 0=%i\n",ft_str_is_printable("\t"));
	printf(" 0=%i\n",ft_str_is_printable("\n"));
	printf(" 1=%i\n",ft_str_is_printable("hello"));
	printf(" 0=%i\n",ft_str_is_printable("hello\n"));

	char txt[]="DJSdj\tskj\n092dG1\t";
	printf("ex05:\n %s upcase=%s\n",txt,ft_strupcase(txt));

	// printf("ex06:\n lowcase=%s\n",ft_strlowcase(txt));
}
