#!/bin/sh
ONE=$(echo $FT_NBR1 | tr "\'\\\\\"\?\!" "01234")
TWO=$(echo $FT_NBR2 | tr mrdoc '01234')
RESULT=$(echo "obase=13;ibase=5; $ONE + $TWO" | bc)
echo $RESULT | tr 0123456789ABC "gtaio luSnemf"
