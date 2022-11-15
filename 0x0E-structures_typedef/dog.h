#ifndef _DOG_H
#define _DOG_H
/**
  * struct dog - type dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif /* _DOG_H */
