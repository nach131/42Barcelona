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

x OR 0 = x ***( 0 or 0 = 0, 0 or 1 = 1)***

podemos pasar como operacion los valores asignados a cada color,

```c
operacion(amarillo | azul | verder | blanco)
```
```
7	amarillo	1 0 0 0 0 0 0 0
5	azul		0 0 1 0 0 0 0 0
4	verde		0 0 0 1 0 0 0 0
3	blanco		0 0 0 0 1 0 0 0
-------------------------------------------
			1 0 1 1 1 0 0 0
```
