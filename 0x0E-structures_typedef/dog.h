#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog attributes
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * _putchar: the character to print
 * @c: ...
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
 * dog_t - Typedef for dog structure
 */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
