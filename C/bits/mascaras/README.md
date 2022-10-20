char tiene 8 bits 

```
7	amarillo	1 0 0 0 0 0 0 0
6	rojo		0 1 0 0 0 0 0 0
5	azul		0 0 1 0 0 0 0 0
4	verde		0 0 0 1 0 0 0 0
3	blanco		0 0 0 0 1 0 0 0
2	negro		0 0 0 0 0 1 0 0
1	magenta		0 0 0 0 0 0 1 0
0	cian		0 0 0 0 0 0 0 1
```

`x OR 0 = x` ***( 0 or 0 = 0, 0 or 1 = 1)***

podemos pasar como operacion los valores asignados a cada color,

```c
operacion(amarillo | azul | verder | blanco)
```
```
7	amarillo	1 0 0 0 0 0 0 0
5	azul		0 0 1 0 0 0 0 0
4	verde		0 0 0 1 0 0 0 0
3	blanco		0 0 0 0 1 0 0 0
----------------------------------------
			1 0 1 1 1 0 0 0  // valor del unsinged char pasado en operación
```
```c
#include <stdio.h>

#define AMARILLO 1 << 7
#define ROJO 1 << 6
#define AZUL 1 << 5
#define VERDE 1 << 4
#define BLANCO 1 << 3
#define NEGRO 1 << 2
#define MAGENTA 1 << 1
#define CIAN 1 << 0

void operacion(unsigned char colors)
{
	printf("colors = %u", colors); // colors = 184 - 1 0 1 1  1 0 0 0
}

int main()
{
	operacion(AMARILLO | AZUL | VERDE | BLANCO);
}
```

Para la comprobación que colores estan activos usamos el AND

`x AND 1 = x` ***( 0 and 1 = 0, 1 and 1 = 1)***

Se quiere saber si el color ROJO esta activo comparamos los colores enviados por la mascara del color rojo

	ACTIVOS 	1 0 1 1  1 0 0 0
	ROJO		0 1 0 0  0 0 0 0
	---------------------------------
			0 0 0 0  0 0 0 0  // esta desactivado


### [mask if](./mask_if.c)

Para desactivar un color que esta ativo utilizamos el AND y el complemtario del color a desactivar

	5 azul		0 0 1 0  0 0 0 0
	
	~ azul		1 1 0 1  1 1 1 1 // complementario de azul
	ACTIVOS 	1 0 1 1  1 0 0 0
	---------------------------------
			1 0 0 1  1 0 0 0      // 

### [mask desactiva azul](./mask_des_azul.c)