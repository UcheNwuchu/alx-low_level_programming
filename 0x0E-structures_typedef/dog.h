#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct for dog info
 *
 * @name: first char type
 * @age: type float
 * @owner: second char type
 *
 *Description: A structure to store dog info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
