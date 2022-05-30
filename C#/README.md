[debugger](https://pythontutor.com/visualize.html#mode=edit)


## Secuencia de escape

| Secuencia de escape | Nombre de carácter |
|--|--|
|\\' | Comilla simple|
|\\" | Comilla dobles|
|\\\ | Barra diagonal inversa|
|\\0 | Null|
|\\a | Alerta |
| \\b| Retroceso |
|\\f | Avance página |
|\\n | Nueva Línea |
|\\r | Retorno de carro |
|\\t | Tabulación horizontal |
|\\v | Tabulación vertical |

---
En C los especificadores de formatos son los que le dicen a las funciones variadicas el tipo de argumento con el que irá a trabajar.

---

| Especificador | descripción |
|--|--|
| %d o %i| Especifican un entero con signo.
| %u     | Especifican un entero sin signo.
| %p     | Direccion de un puntero u dato.
| %lld   | Especifica un entero largo (long long). [*]
| %llu   | Entero largo sin signo (unsigned long long) [*]
| %s     | Especifica que el parametro es un puntero a un arreglo de caracteres.
| %c     | Un caracter.
| %x     | Especifica un valor hexadecimal.
| %%     | Muestra un literal de porcentaje.
| %f     | Imprime un float o double.

*: Estos especificadores pueden estar fuera de estándar.

https://docs.microsoft.com/es-es/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-170
---

[Librerias C#](https://conclase.net/c/librerias)


***ft_strnstr.c***

Hace lo mismo

    *(const char *)(haystack +1)
    haystack[1]
pasar resultado de una opecacion de dos size_t a integer
    
    (int)(len - lent_dos)

---
