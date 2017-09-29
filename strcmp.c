#include<stdio.h>
#include<string.h>

int main() {
    // Mutable strings, to ensure the 
    // Memory address isn't the same

    char str1[]= "abcdef";
    char str2[]= "abcdef";
    char str3[]= "accd";
    char str4[]= "0000100";
    char str5[]= "00009";

    printf("============\n\n");
    printf("strcmp compares two strings\n\n");

    // Multi line printfs, cause I wanted to fit this
    // onto one split screen terminal and was too lazy
    // to change its dimensions.
    printf("If they are equal, it returns 0.\n\n");
    printf("If they are not equal, it depends on the");
    printf(" first character (from left to right) ");
    printf("that's different between the strings.\n");
    printf("It returns");
    printf(" the difference between the first unique");
    printf(" character in the first string and the first");
    printf(" unique character in the second string. This");
    printf(" can be negative.\n\n\n");

    printf("COMPARE:\n");
    printf("%s with %s: %d\n", str1, str2, strcmp(str1, str2));
    printf("%s with %s: %d\n", str1, str3, strcmp(str1, str3));
    printf("%s with %s: %d\n", str5, str4, strcmp(str5, str4));

    printf("\n\n");
    printf("strncmp is the same as strcmp, but it only checks");
    printf(" the first \"n\" characters in the string.\n");
    printf("============\n\n");
    return 0;
}
