#include "./ex00/ft_strcmp.c"
#include "./ex01/ft_strncmp.c"
#include "./ex02/ft_strcat.c"
#include "./ex03/ft_strncat.c"
#include <stdio.h>
#include <string.h>
int	main()
{
	printf("ex00:\n 0=%i\n",ft_strcmp("hElL0!","hElL0!"));
	printf(" -1=%i\n",ft_strcmp("hElL0!","iElL0!"));
	printf(" 1=%i\n",ft_strcmp("iElL0!","hElL0!"));
	printf(" 97=%i\n",ft_strcmp("hElL0!a","hElL0!"));
	printf(" 195=%i\n",ft_strcmp("hElL0!ab","hElL0!"));
	printf(" -195=%i\n\n",ft_strcmp("hElL0!","hElL0!ab"));


	printf("ex01:\n 0=%i\n",ft_strncmp("hElL0!","hElL0!",2));
	printf(" -97=%i\n",ft_strncmp("hE","hEa",5));
	printf(" 205=%i\n",ft_strncmp("hEla","hE",5));
	printf(" 1=%i\n",ft_strncmp("iElL0!","hElL0!",10));

	char *src="hello!";
	char dest[strlen(src)];
	printf("ex02:\n initial: src:%s dest:%s\n",src,dest);
	ft_strcat(dest,src);
	printf(" after function initial: src:%s dest:%s\n\n",src,dest);

	char dest2[strlen(src)];
	printf("ex03:\n initial: src:%s dest:%s\n",src,dest2);
	ft_strncat(dest2,src,2);
	printf(" after function initial: src:%s dest:%s\n\n",src,dest2);
	ft_strncat(dest2,src,10);
	printf(" after function initial: src:%s dest:%s\n\n",src,dest2);
}
