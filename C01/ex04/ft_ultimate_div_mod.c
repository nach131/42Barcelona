void	ft_ultimate_div_mod(int *a, int *b)
{
int a2;
int b2;

a2 = *a / *b;
b2 = *a % *b;

*a = a2;
*b = b2;

}
