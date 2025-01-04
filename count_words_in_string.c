#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
    char input_str[100];
    fgets(input_str,100,stdin);
    int n=strlen(input_str);
    int word_count=0;
    int i=0;
    while(i<n && isspace(input_str[i]))
    {
        i++;
    }
    while(i<n)
    {
        if(!isspace(input_str[i]) && (i==0 || isspace(input_str[i - 1])))
        {
            word_count+=1;
        }
        i++;
    }
    printf("%d ",word_count);
    return 0;
}