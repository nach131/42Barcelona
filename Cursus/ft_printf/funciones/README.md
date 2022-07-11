# va_arg, va_copy, va_end, va_start

     #include <stdarg.h>

     void va_start(va_list ap, last);

     type va_arg(va_list ap, type);

     void va_copy(va_list dest, va_list src);

     void va_end(va_list ap);

**type**: Tipo de argumento a recuperar.

**arg_ptr**: Puntero a la lista de argumentos.

**dest**: Puntero a la lista de argumentos que se inicializarán desde src

**src**: Puntero a la lista inicializada de argumentos para copiar a dest.

**prev_param**: Parámetro que precede al primer argumento opcional.

## Return

**va_arg** devuelve el argumento actual. **va_copy**, **va_start** y va_end no devuelven valores.