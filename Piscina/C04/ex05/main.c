#include<stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*str_pos = "       --++00000000a42  ";
	char	*str_neg = "      ---++++++2147483648mole42-----++++   ";
	char	*decimal_base = "0123456789";
	char	*binary_base = "01";
	char	*hexa_base = "0123456789ABCDEF";
	char	*octal_base = "poneyvif";
   	char	*quarternary_base = "top@";
	char	*invalid_base1 = "";
	char	*invalid_base2 = "0";
	char	*invalid_base3 = "+25";
	char	*invalid_base4 = "topo";

	printf("----------------------------------------------------------------\n");	
	printf("Test with: \nstr_pos = %s  \nstr_neg = %s\n", str_pos, str_neg);	
	printf("Decimal base: %s\n", decimal_base);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, decimal_base));
	printf("\n");
	
	printf("Expected:-2147483648\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, decimal_base));
	printf("\n");
	printf("----------------------------------------------------------------\n");	
	
	str_pos = "\f000";
	str_neg = "\n-10000000000000000000000000000000";
	printf("Test with: \nstr_pos = %s  \nstr_neg = %s\n", str_pos, str_neg);	
	printf("Binary base: %s\n", binary_base);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, binary_base));
	printf("\n");
	
	printf("Expected: -2147483648\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, binary_base));
	printf("\n");
	printf("----------------------------------------------------------------\n");	
	
	str_pos = "  \r              ++++++--++++++000000000iebgbgi";
	str_neg = "    \t                 --------+++++-------80000000inienwi809482";
	printf("Test with: \nstr_pos = %s \nstr_neg = %s\n", str_pos, str_neg);	
	printf("Hexadecimal base: %s\n", hexa_base);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, hexa_base));
	printf("\n");
	
	printf("Expected: -2147483648\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, hexa_base));
	printf("\n");
	printf("----------------------------------------------------------------\n");	
	
	str_pos = "   \v  +++++ppppppp&&&&&******   ";
	str_neg = "\f-------+++++++++++nppppppppppzzzzzzzzzzzz";
	printf("Test with: \nstr_pos = %s \nstr_neg = %s\n", str_pos, str_neg);	
	printf("Octal base: %s\n", octal_base);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, octal_base));
	printf("\n");
	
	printf("Expected: -2147483648\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, octal_base));
	printf("\n");
	printf("----------------------------------------------------------------\n");	
	
	str_pos = "  \t     --+++++++ttttttttttttttttttttttttttttttttttalalalalalala++++";
	str_neg = "    \t   +++---pttttttttttttttt+++++++------     alalallalal";
	printf("Test with: \nstr_pos = %s  \nstr_neg = %s\n", str_pos, str_neg);	
	printf("Quarternary base: %s\n", quarternary_base);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, quarternary_base));
	printf("\n");
	
	printf("Expected: -2147483648\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, quarternary_base));
	printf("\n");
	printf("----------------------------------------------------------------\n");	
	
	printf("Invalid base: %s\n", invalid_base1);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, invalid_base1));
	printf("\n");
	
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, invalid_base1));
	printf("\n");
	printf("----------------------------------------------------------------\n");	
	
	printf("Invalid base: %s\n", invalid_base2);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, invalid_base2));
	printf("\n");
	
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, invalid_base2));
	printf("\n");
	printf("----------------------------------------------------------------\n");	
	
	printf("Invalid base: %s\n", invalid_base3);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, invalid_base3));
	printf("\n");
	
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, invalid_base3));
	printf("\n");
	printf("----------------------------------------------------------------\n");	
	
	printf("Invalid base: %s\n", invalid_base4);
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_pos, invalid_base4));
	printf("\n");
	
	printf("Expected: 0\n");
   	printf("Obtained: %d\n", ft_atoi_base(str_neg, invalid_base4));
	printf("\n");
	printf("----------------------------------------------------------------\n");	

	return (0);
}
