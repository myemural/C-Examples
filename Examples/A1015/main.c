/** @file main.c
 *  @brief Check Vowel or Consonant
 *
 *  This program gets a character from user
 * 	and checks whether it is vowel or consonant.
 *
 *  @author Mustafa Yemural (myemural)
 *  @date 06/02/2017
 */

#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    int isVowel = 0;

    switch (letter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        isVowel = 1;
    }

    if (isVowel) {
        printf("%c is a vowel!\n", letter);
    } else {
        printf("%c is a consonant!\n", letter);
    }

    return 0;
}
