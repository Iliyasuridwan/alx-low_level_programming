#include < stdlib.h>
#include "dog.h"
int _strlen(char *s)
	char *_strcpy(char *dest, char *src)
	dog_t *new_dog(char *name, float age, char *owner)
	dog_t *dog;

	int len1, len2;

       	len1 = _strlen(name);
	len2 = _strlen(owner);


dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);

return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
