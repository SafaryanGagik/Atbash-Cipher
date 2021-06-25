#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int main()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char retern[26];
    char word[20];
    int minus;
    printf("Enter the word: ");
    scanf("%s",word);
        for(int j = 0; word[j] != '\0';j++)
        {
            minus = abs(97 - word[j]) + 1;
            retern[j] = alphabet[26-minus];
        }
    for(int i = 0; word[i] != '\0';i++)
    {
        printf("%c",retern[i]);
    }
}
