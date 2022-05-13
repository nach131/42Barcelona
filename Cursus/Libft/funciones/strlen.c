/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// La función strlen() toma una cadena como argumento y devuelve su longitud.
// El valor devuelto es de tipo size_t (el tipo entero sin signo).

#include <stdio.h>
#include <string.h>

int main()
{
	char a[20]="42Barcelona";
	char b[20]={'4','2','B','a','r','c','e','l','o','n','a'};

	// usando %zu para el formato especifico de size_t
	printf("Longitud de '%s' en a es = %zu \n",a, strlen(a));
	printf("Longitud de '%s' en b es = %zu \n",b, strlen(b));
	return 0;
}
