#ifndef DOG_H
#define DOG_H
/**
 * File: dog.
 * Desc: Header file that defines a new type struct dog.
 * struct dog - Dog attributes
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * struct dog: The attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, cgar *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(cgar *name, float age, cgar *owner);
void free_dog(dog_t *d);
#endif
