#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog's basic information.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines a dog's basic information.
 */
typedef struct dog dog_t;

struct dog
{
    char *name;   /* The name of the dog. */
    float age;    /* The age of the dog. */
    char *owner;  /* The owner of the dog. */
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/* Utility functions */
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
