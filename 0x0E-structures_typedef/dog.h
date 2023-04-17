#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure of the dog
 * @name: dogs name
 * @age: age of the dog
 * @owner: dogs owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
