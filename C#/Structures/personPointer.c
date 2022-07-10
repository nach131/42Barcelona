/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   personPointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:34:31 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/10 13:35:00 by nmota-bu         ###   ########.fr       */
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
	struct Person person1 = {"Martin", 57};
	struct Person person2 = {"Michelle", 27};

	struct Person *person1Pointer = &person1;
	struct Person *person2Pointer = &person2;


	(*person1Pointer).age = (*person1Pointer).age +1;
	 person2Pointer->age = person2Pointer->age +10;

	printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
	printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
}
