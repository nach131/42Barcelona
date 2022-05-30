/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:28:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/30 22:15:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// int atoi(const char *str) convierte el argumento de cadena str en un entero 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];

   strcpy(str, "98993489");
   val = atoi(str);
   printf("Valor del string = %s, Int valor = %d\n", str, val);

   strcpy(str, "42 Barcelona");
   val = atoi(str);
   printf("Valor del string = %s, Int valor = %d\n", str, val);

   strcpy(str, "frf ssv  42");
   val = atoi(str);
   printf("Valor del string = %s, Int valor = %d\n", str, val);

   strcpy(str, "--124");
   val = atoi(str);
   printf("Valor del string = %s, Int valor = %d\n", str, val);
	
   strcpy(str, "-+124");
   val = atoi(str);
   printf("Valor del string = %s, Int valor = %d\n", str, val);


   return(0);
}
//Valor del string = 98993489, Int valor = 98993489
//Valor del string = 42 Barcelona, Int valor = 42
//Valor del string = frf ssv  42, Int valor = 0
//Valor del string = -435, Int valor = -435
