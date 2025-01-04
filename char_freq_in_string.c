#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int find_freq(int *char_count,char find_char)
{
    for (int i = 0; i < 256; i++) {
        if (i== find_char) {
            printf("Character '%c' appears %d times\n", i,char_count[i]);
             return 1;
        }
    }
    return 0;
}
int main() {
    char str1[100];
    scanf("%[^\n]", str1);
    getchar();
    char find_char;
    scanf("%c",&find_char);
    int n=strlen(str1);
    int char_count[256]={0};
    for(int i=0;i<n;i++)
    {
        char_count[str1[i]]+=1;
    }
    if (find_freq(char_count, find_char)) {
    } else {
        printf("Character '%c' not found in the string\n", find_char);
    }
    return 0;
}
