
Para saber el tamaño de los tipos de datos usamos el operador ```sizeof``` devuelve el valor en [bytes](https://es.wikipedia.org/wiki/Byte) 1 bytes = 8 bits (0000 0001 = '1').

```c
int main(void)
{
	printf("<char> %zd bytes\n", sizeof(char));
	printf("<short> %zd bytes\n", sizeof(short));
	printf("<int> %zd bytes\n", sizeof(int));
	printf("<float> %zd bytes\n", sizeof(float));
	printf("<long> %zd bytes\n", sizeof(long));
	printf("<long long> %zd bytes\n", sizeof(long long));
	printf("<double> %zd bytes\n", sizeof(double));
	printf("<long double> %zd bytes\n", sizeof(long double));
	printf("<struct> %zd bytes\n", sizeof(t_list));
}
```
	<char> 1 bytes			 0000 0000
	<short> 2 bytes			 0000 0000 0000 0000
	<int> 4 bytes			 0000 0000 0000 0000 0000 0000 0000 0000 
	<float> 4 bytes
	<long> 8 bytes
	<long long> 8 bytes
	<double> 8 bytes
	<long double> 16 bytes
	<struct> 16 bytes
### [tipos.c](./tipos.c)



## Caracteres
El char ocupa un byte (8 bits) puede tener signo y sin signo.

| Nombre | Alcanze |
|--|--|
| char         | ASCii          |
| signed char  | -128 hasta +127|
| unsigned char| 0 hasta 255    |

