// recorro todo valor del puntero 
// escribo caracter por caracte

#include <unistd.h>
void	ft_putstr(char *str)
{
int letra;
letra = 0;
while(str[letra])
{
write(1, &str[letra], 1);
letra++;
}

}
