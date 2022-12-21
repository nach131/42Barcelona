/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruta_exec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:51:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/15 13:51:57 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
#include <unistd.h>
#include <stdio.h>

int main() {
  char cwd[1024];
  if (getcwd(cwd, sizeof(cwd)) != NULL) {
    printf("La ruta de ejecución actual es: %s\n", cwd);
  } else {
    perror("getcwd() error");
    return 1;
  }
  return 0;
}
