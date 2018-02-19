#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	char *a, *b;
	struct dog *ndog;

	i = 0;
	while (name[i] != '\0')
	{
		len1++;
		i++;
	}
	while (owner[i] != '\0')
	{
		len2++;
		i++;
	}
	a = malloc(sizeof(char) * (len1 + 1));
	if (a == NULL)
		return (NULL);
	b = malloc(sizeof(char) * (len2 + 1));
	if (b == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		a[i] = name[i];
	a[i + 1] = '\0';

	for (i = 0; i < len2; i++)
		b[i] = owner[i];
	b[i + 1] = '\0';

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	ndog->name = a;
	ndog->age = age;
	ndog->owner = b;


	return (ndog);

}
