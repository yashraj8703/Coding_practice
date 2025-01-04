#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void largest_smallest_word(char word_array[100][100],int word_count)
{
    if (word_count == 0) {
        printf("No words found.\n");
        return;
    }
    char lar_str[100];
    char small_str[100];
    strcpy(lar_str, word_array[0]);
    strcpy(small_str, word_array[0]);
    for (int i = 1; i < word_count; i++) {
        if (strlen(word_array[i]) > strlen(lar_str)) {
            strcpy(lar_str, word_array[i]);
        }
        if (strlen(word_array[i]) < strlen(small_str)) {
            strcpy(small_str, word_array[i]);
        }
    }
     printf("largest word is '%s'\n",lar_str);
     printf("smallest word is '%s'\n",small_str);
}

int main() {
    char input_str[100];
    scanf("%[^\n]", input_str);
    int n=strlen(input_str);
    int i=0,j=0,word_count=0;
    char word_array[100][100];
    
    while(i<n && isspace(input_str[i]))
    {
        i++;
    }
    
    while(i<n)
    {
        if(!isspace(input_str[i]))
        {
            word_array[word_count][j]=input_str[i];
            j++;
        }
        else if(j>0)
        {
            word_array[word_count][j]='\0';
            word_count++;
            j=0;
        }
        i++;
    }
    if(j>0)
    {
        word_array[word_count][j]='\0';
        word_count++;
    }
    if (word_count > 0) {
        largest_smallest_word(word_array, word_count);
    } else {
        printf("No words found.\n");
    }
    return 0;
}
