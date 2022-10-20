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
|0|1|1|0| |0|0|0|1|


## & (AND)

El operador AND bit a bit compara cada bit de su primer operando con el bit correspondiente de su segundo operando. 

Si ambos bits son 1, el bit del resultado correspondiente se establece en 1. De lo contrario, el bit del resultado correspondiente se establece en 0.

	0110 0001  a = 97
	0101 0011  S = 83
	-----------------
	0100 0001  A = 65

[`and.c`](./and.c)

## ~ (bit a bit not)

Realiza la negación lógica en cada bit del número, los ceros se convierte en unos y os unos en ceros.

	0110 0001  a = 97
	1001 1110 ~a = 158

