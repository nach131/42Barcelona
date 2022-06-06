/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_tmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:08:02 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/06 18:09:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */ 



#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char newString[10][10];
    int i,j,ctr;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");

    printf(" Input  a string : ");
    fgets(str1, sizeof str1, stdin);

    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
    return 0;
}
