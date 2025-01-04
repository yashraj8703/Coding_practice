#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int checkword(char *input_word,char words_array[100][100],int word_count)
{
    for(int i=0;i<word_count;i++)
    {
        if(strcmp(input_word,words_array[i])==0)
        {
            return 1;
        }
    }
    return 0;
}
int main() {
    char input_str[100];
    scanf("%[^\n]", input_str);
    getchar();
    char input_word[100];
    scanf("%[^\n]", input_word);
    char words_array[100][100];
    int n=strlen(input_str);
    int i=0,j=0;
    int word_count=0;
    while(i<n && isspace(input_str[i]))
    {
        i++;
    }
    while(i<n)
    {
        if(!isspace(input_str[i]))
        {
            words_array[word_count][j]=input_str[i];
            j++;
        }
        else if(j>0)
        {
            words_array[word_count][j] ='\0'; 
            word_count++;
            j=0;
        }
        i++;
    }
    if (j > 0) {
        words_array[word_count][j] = '\0';
        word_count++;
    }
    if (checkword(input_word, words_array, word_count)) {
        printf("Word found in the array.\n");
    } else {
        printf("Word not found in the array.\n");
    }
}