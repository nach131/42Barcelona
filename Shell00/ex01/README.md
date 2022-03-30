# ex01


| Ingles             | Valor    | Descripción |
|-------------------|-------------|---------------|
| Read   | r    | Lectura Acceso y copia del contenido| 
| write  | w    |   Escritura y actualización del contenido| 
| Execute |  x  | Ejecución y ejecutar programas|


 - Los tres primeros caracteres representan los permisos que corresponden al usuario (users)

- Los tres siguientes caracteres representan los permisos correspondientes al grupo (group)

- Los últimos tres caracteres representan los permisos correspondientes al otro (other)


**Permisos regulares**

Podemos cambiar los permisos mediante unos código preestablecidos sin necesidad de ir consultando cada vez los permisos del los archivos.

rwx = 4+2+1 = 7

rw- = 4+2+0 = 6

r-- = 4+0+0 = 4

    chmod 746 archivo


Por ejemplo:

Vamos asignar todos los permisos al archivo dos.txt
    
    chmod 777 dos.txt 
    -rwxrwxrwx 1 alumno users 0 jun  1 00:07 dos.txt
    

| Permisos | Usuario | Grupo | Otros |
|--|--|--|--|
|400 |r--|---|---|
|440 |r--| r--|	---
|444 |r-- |r--|	|r--
500 |	r-x |---	|---
550	|r-x |r-x	|---
555	|r-x |r-x	|r-x
644	|rw- |r--	|r--
664	|rw- |rw-	|r--
666 | rw-	|rw-	|rw-
700	|rwx |---	|---
711	|rwx |--x	|--x
707	|rwx	|---	|rwx
750	|rwx	|r-x	|---
755	|rwx	|r-x	|r-x
777	|rwx	|rwx	|rwx





[Saber mas: Permisos_de_ficheros](https://wiki.enunpimpam.com/pimpamwiki/index.php/Permisos_de_ficheros)

---
 **resolved**

    touch testShell00
    chmod u-w testShell00
    chmod go+x testShell00