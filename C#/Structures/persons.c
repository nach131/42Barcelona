/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   persons.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:20:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/10 13:22:14 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

struct Person {
	char name[40];
	int age;
};

int main(void) {
	struct Person person1 = {"Martin"};
	struct Person person2 = {"Michelle"};
	// Write your code below
	person1.age = 57;
	person2.age = 27;

	printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
	printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
}

// Hello my name is Martin and I am 57 years old.
// Hello my name is Michelle and I am 27 years old.
