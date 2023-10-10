#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog with a name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure represents a dog's basic information.
 */
typedef struct dog dog_t;

struct dog
{
    char *name;   /* The name of the dog. */
    float age;    /* The age of the dog. */
    char *owner;  /* The owner of the dog. */
};

/**
 * init_dog - Initializes a dog structure.
 * @d: A pointer to the dog structure to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes a dog structure with the given values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a dog structure.
 * @d: A pointer to the dog structure to print.
 *
 * Description: This function prints the details of a dog structure.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog structure.
 *
 * Description: This function creates a new dog structure and initializes it
 *              with the provided values.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: A pointer to the dog structure to free.
 *
 * Description: This function frees the memory allocated for a dog structure.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 *
 * Description: This function copies the source string to the destination string.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 *
 * Description: This function calculates the length of the input string.
 */
int _strlen(char *s);

#endif
