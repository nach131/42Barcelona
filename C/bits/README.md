# Operadores para bits

|||
|--|--|
| & | AND compara dos bits|
| \| | OR  inclusivo|
| ^ | XOR "OR" exclusivo|
| ~ | NOT Complemento a uno|


`MSB` (most significant bit) bit con mas significado.

El bit que tiene mayor valo dentro del conjunto.

`LSB` (Least Significant Bit) bit con menos significado.

El bit que tiene menor valo dentro del conjunto.

| | | | | | | | | |
|--|--|--|--|--|--|--|--|--|
|MSB|||| | | | |LSB|
|1|1|1|0| |0|0|0|1|


## & (AND)

El operador AND bit a bit compara cada bit de su primer operando con el bit correspondiente de su segundo operando. 

Si ambos bits son 1, el bit del resultado correspondiente se establece en 1. De lo contrario, el bit del resultado correspondiente se establece en 0.

	0110 0001 a = 97
	0100 0110 F = 70
	-----------------
	0100 0000  @ = 64

### [`and_bit.c`](./and_bit.c)

## | (OR)

El operador OR inclusivo bit a bit compara cada bit de su primer operando con el bit correspondiente de su segundo operando.

Si uno de los dos bits es 1, el bit del resultado correspondiente se establece en 1. De lo contrario, el bit del resultado correspondiente se establece en 0.

	0110 0001 a = 97
	0101 0011  S = 83
	-----------------
	0111 0011 s = 115

### [`or_bit.c`](./or_bit.c)

## ^ (XOR exclusivo)

El operador OR exclusivo bit a bit compara cada bit de su primer operando con el bit correspondiente de su segundo operando.

Solo 1 cuando hay uno solo, ningún doble 0 ni doble 1.

	0110 0001  a = 97
	0101 0011  S = 83
	-----------------
	0011 0010  2 = 50

### [`xor_bit.c`](./xor_bit.c)

## ~ (bit a bit not)

Realiza la negación lógica en cada bit del número, los ceros se convierte en unos y os unos en ceros.

	0110 0001  a = 97
	-----------------
	1001 1110 ~a = 158

## [`print_bit.c`](./print_bit.c)
