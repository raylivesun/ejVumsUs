#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int age;
} Person;

void swap_persons(Person *p1, Person *p2) {
    Person temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void print_person(Person person) {
    printf("Name: %s, Age: %d\n", person.name, person.age);
}

int main() {
    // Create two person objects
    Person person1 = {};
    Person person2 = {};

    // Swap the persons using the swap_persons function
    swap_persons(&person1, &person2);

    // Print the swapped persons
    printf("After swapping:\n");
    print_person(person1);
    print_person(person2);

    return 0;
}
