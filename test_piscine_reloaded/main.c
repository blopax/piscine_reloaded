#include "main.h"
#include "stdio.h"

int		main(int argc, char **argv)
{
	char	c;
	int		a;
	int		b;
	int		div;
	int		mod;
	char	*str;
	char	*str1;
	char	*str2;

	if (argc > 1)
		c = argv[1][0];
	ft_print_alphabet();
	printf("\n");
	ft_print_numbers();
	printf("\n");
	ft_is_negative(3);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(-4);
	printf("\n");

	a = 7;
	b = -3;
	printf("avant a = %d et b = %d \n", a, b);
	ft_swap(&a, &b);
	printf("apres a = %d et b = %d \n", a, b);

	ft_div_mod(a, b, &div, &mod);
	printf("a = %d et b= %d , div =%d, mod = %d \n", a, b, div, mod);

	a = 147;
	b = 13;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d et b= %d , div =%d, mod = %d \n", a, b, div, mod);


	printf("fact -2 = %d \n", ft_iterative_factorial(-2));
	printf("fact 0 = %d \n", ft_iterative_factorial(0));
	printf("fact 1 = %d \n", ft_iterative_factorial(1));
	printf("fact 5 = %d \n", ft_iterative_factorial(5));
	printf("fact 12 = %d \n", ft_iterative_factorial(12));
	printf("fact 13 = %d \n", ft_iterative_factorial(13));

	printf("fact -2 = %d \n", ft_recursive_factorial(-2));
	printf("fact 0 = %d \n", ft_recursive_factorial(0));
	printf("fact 1 = %d \n", ft_recursive_factorial(1));
	printf("fact 5 = %d \n", ft_recursive_factorial(5));
	printf("fact 12 = %d \n", ft_recursive_factorial(12));
	printf("fact 13 = %d \n", ft_recursive_factorial(13));

	printf("sqrt -2 = %d \n", ft_sqrt(-2));
	printf("sqrt 0 = %d \n", ft_sqrt(0));
	printf("sqrt 1 = %d \n", ft_sqrt(1));
	printf("sqrt 2 = %d \n", ft_sqrt(2));
	printf("sqrt 10000 = %d \n", ft_sqrt(10000));
	printf("sqrt 2147483647 = %d \n", ft_sqrt(2147483647));
	printf("sqrt 2147395600 = %d \n", ft_sqrt(2147395600));

	str = "12345";
	ft_putstr(str);
	printf("str = %s \nlen str = %d \n", str, ft_strlen(str));
	
	str1 = "21";
	str2 = "213";
	printf("str1 = %s str2 = %s et strcmp = %d \n", str1, str2, ft_strcmp(str1, str2));

//	printf("str1 = %s et dupstr1 = %s \n str2 = %s et dupstr2 = %s", str1, ft_strdup(str1), str2, ft_strdup(str2));

	printf("2 = %d et 5 = %d \n", ft_range(2,5)[0], ft_range(2,5)[3]);
	
}
