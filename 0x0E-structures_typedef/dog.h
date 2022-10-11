#ifndef DOG.H
#define DOG.H

/**
 * struct dog - in this program we created a struct
 * named dog.
 * @name: dog's name
 * @age: age of the dog
 * @owner: person that owns the dog
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
dog_t *new_dog(char *name, float *age, char *owner);
void free_dog(dog_t *d)

#endif
