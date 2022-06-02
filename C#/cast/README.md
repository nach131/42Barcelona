## Conversor de tipo (Casting)
***"castear"***

Conversion de un tipo de dato a otro, siempre que los tipos de datos sean compatibles.

Para realizar un cast solo tenemos que poner el timpo de datos delante de la expresión o variable, constante, puntero... a convertir.

    int a = 65;

    printf("\n a:%d \n(float) a:%.3f \n(double) a:%.3f \n(char) a:%c \n", a, (float)a, (double)a, (char)a);

**resultado:**

    a:65
    (float) a:65.000
    (double) a:65.000
    (char) a:A

**Castear resultado operación**
Si dividimos dos enteros y queremos optener el resultado en float (decimales) tendremos que castear el resultado

    float   res;
    int a=5, b=2;

    res = (float)a / b;

    printf("resultado: %.2f\n", res);
    
**resultado:**
    resultado: 2.50