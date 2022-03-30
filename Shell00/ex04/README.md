# ex04

     ls -- list directory contents

SYNOPSIS

     ls [-ABCFGHLOPRSTUW@abcdefghiklmnopqrstuwx1] [file ...]

DESCRIPTION

For each operand that names a file of a type other than directory, ls
displays its name as well as any requested, associated information.  For
each operand that names a file of type directory, ls displays the names
of files contained within that directory, as well as any requested, asso-
ciated information ...

opcions 

-m     
rellenar el ancho con una lista de entradas separadas por comas

-t     
 Ordenar por hora de modificación (los modificados más recientemente primero) antes de ordenar las operaciones, y por orden lexicográfico.

 -F     
 Muestre una barra inclinada (`/') inmediatamente después de cada nombre de ruta que sea un directorio, una asterisco (`*') después de cada ejecutable, un signo de arroba (`@') después de cada símbolo enlace bólico, un signo igual (`=') después de cada socket, un signo de porcentaje (`%') después cada blanco, y una barra vertical (`|') después de cada uno que es un FIFO.
             
---
 **resolved**
          
     ls -mFt