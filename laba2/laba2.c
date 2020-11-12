//Ввести строку, подсчитать количество слов заданной длины.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char str[100], c;
    int i = 0, k = 0, count = 0, len_word = 0, word = 0;
    printf("Input string: \n");
    while ((c = getchar()) != '\n' && i < 99)
    {
        str[i] = c;
        i++;
    }
    k = i + 1;
    str[i] = ' ';
    str[k] = '\0';
    printf("Input word lenght: \n");
    scanf("%d", &len_word);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ')
        {
            if (count && count == len_word) 
            {
                word++;
                count = 0;
            }
            else 
            {
                count = 0;
            }
        }
        else if (str[i] != ' ') 
        {
            if ((str[i] >= 'A') && (str[i] <= 'Z')|| (str[i] >= 'a') && (str[i] <= 'z'))
            {
                count++;
            }
            else if (str[i] == "[0-9]"|| str[i] == "[].,?!/;:-)(''\"'*^$%#@{}<>+=|~")
            {
                    count--;
            }
            
        }
        
    }
    printf("Count words: %d", word);
}
