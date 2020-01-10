#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** A basic example of a struct in C
*/

struct Dog {
    char name[20];
    char breed[20];
    int age;
    double weightInPounds;
};


int main() {
    
    struct Dog dog1;
    strcpy( dog1.name, "Fido");
    strcpy( dog1.breed, "Lab");
    dog1.age = 7;
    dog1.weightInPounds = 24.5;

    struct Dog dog2;
    strcpy( dog2.name, "Spot");
    strcpy( dog2.breed, "Dalmatian");
    dog2.age = 12;
    dog2.weightInPounds = 30.25;

    printf("%s the dog is a %s. He is %d years old and weighs %f pounds\n", dog1.name, dog1.breed, dog1.age, dog1.weightInPounds);
    printf("%s the dog is a %s. He is %d years old and weighs %f pounds\n", dog2.name, dog2.breed, dog2.age, dog2.weightInPounds);
    

    return 0;
}