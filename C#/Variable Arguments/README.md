# Variable Arguments
- `va_arg()`	Conseguir siguiente argumento de la variable

- `va_copy()`	Copiar la `va_list` y todo el trabajo realizado.

- `va_end()`	Fin de procesar variables de argumentos.

- `va_start()`	Inicializar una `va_list` para iniciar el procesamiento de argumentos variables.

## va_arg()

**Synopsis**

	#include <stdarg.h>

	type va_arg(va_list ap, type);

[va_start](va_start.c)

## va_copy()

**Synopsis**

	#include <stdarg.h>

	void va_copy(va_list dest, va_list src)

El principal uso previsto de esto es guardar su estado a la mitad del procesamiento de argumentos variables para que pueda escanear hacia adelante y luego retroceder hasta el punto de guardado.

Pasas un src `va_list` y lo copia a `dest`.

Si `dest` ya fue llamado, no puede volver a llamarlo (o va_start()) con el mismo destino a menos que primero indiquemos `va_end()` en `dest`.

	va_copy(dest, src);
	va_copy(dest, src2);  // MAL ! !

	va_copy(dest, src);
	va_start(dest, var);  // MAL ! !

	va_copy(dest, src);
	va_end(dest);
	va_copy(dest, src2);  // OK!

	va_copy(dest, src);
	va_end(dest);
	va_start(dest, var);  // OK!