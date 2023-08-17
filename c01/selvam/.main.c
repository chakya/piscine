#include "./ex00/ft_ft.c"
#include "./ex01/ft_ultimate_ft.c"
#include "./ex02/ft_swap.c"
#include "./ex03/ft_div_mod.c"
#include "./ex04/ft_ultimate_div_mod.c"
#include <stdio.h>

void main(){



	int	a = 0;
	printf("ex00: \ninitial\na=%i\n",a);
	int	*p = &a;

	ft_ft(&a);
	printf("after function\na=%i\n",a);
	printf("p=%i\n",*p);

	int	b = 0;
	printf("\nex01: \ninitial\nb= %i\n",b);
	int	*p1 = &b;
	int	**p2 = &p1;
	int	***p3 = &p2;
	int	****p4 = &p3;
	int	*****p5 = &p4;
	int	******p6 = &p5;
	int	*******p7 = &p6;
	int	********p8 = &p7;
	int	*********p9 = &p8;
	ft_ultimate_ft(p9);
	printf("after function\nb=%i\n",b);
	printf("9*p=%i\n\n",*********p9);

	int x=1;
	int y=2;

	int *c=&x;
	int *d=&y;

	printf("ex02: \ninitial\nx=%i\n",x);
	printf("y=%i\n",y);
	printf("c=%i\n",*c);
	printf("d=%i\n",*d);
	ft_swap(c,d);

	printf("after function\nx=%i\n",x);
	printf("y=%i\n",y);
	printf("c=%i\n",*c);
	printf("d=%i\n\n",*d);

	int e = 13;
	int f = 5;
	int g = 0;
	int h = 0;

	printf("ex03:\ninitial\ng=%i\n",g);
	printf("h=%i\n",h);
	ft_div_mod(e,f,&g,&h);
	printf("after function\ng=%i\n",g);
	printf("h=%i\n\n",h);

	int i = 13;
	int j = 5;

	printf("ex04: \ninitial\ni=%i\n",i);
	printf("j=%i\n",j);
	ft_ultimate_div_mod(&i,&j);
	printf("after function\ni=%i\n",i);
	printf("j=%i\n",j);

}
