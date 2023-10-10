#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This struct defines a dog's basic information.
 */
typedef struct dog dog_t;

struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - initializes a dog structure
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function initializes a dog structure with the given values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a dog structure
 * @d: pointer to the dog structure
 *
 * Description: This function prints the details of a dog structure.
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog structure
 *
 * Description: This function creates a new dog structure and initializes it
 * with the provided values.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees a dog structure
 * @d: pointer to the dog structure
 *
 * Description: This function frees the memory allocated for a dog structure.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string
 *
 * Description: This function copies the source string to the destination string.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - calculates the length of a string
 * @s: input string
 *
 * Return: length of the string
 *
 * Description: This function calculates the length of the input string.
 */
int _strlen(char *s);

#endif

