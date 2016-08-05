#include <stdio.h>

int main(int argc, char *argv[]){
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Pat";
    char full_name[] = {
        'P', 'a', 't', 'r', 'i', 'c', 'k', ' ',
        'R', '.', ' ',
        'A', 'l', 'l', 'e', 'n', '\0'
    };

    // Extra credit
    areas[0] = 100;
    name[1] = 'o';
    full_name[1] = name[1];
    // -----------

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("Number of ints in areas: %ld\n\n", sizeof(areas)/sizeof(int));

    printf("Size of a char: %ld\n", sizeof(char));
    printf("Size of name: %ld\n", sizeof(name));
    printf("Number of chars: %ld\n\n", sizeof(name)/sizeof(char));

    printf("Size of full_name: %ld\n", sizeof(full_name));
    printf("Number of chars: %ld\n", sizeof(full_name)/sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"", name, full_name);
}
