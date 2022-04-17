// recorro todo valor del puntero 
// escribo caracter por caracte
// while mientras el puntero tenga datos str[letras]
// write &str para indicar que quiero el valor del puntero
// con la posicion de la letra.

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
