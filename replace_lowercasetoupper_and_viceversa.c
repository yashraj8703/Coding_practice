#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
    char input_str[100];
    scanf("%[^\n]", input_str);
    for(int i=0;i<strlen(input_str);i++)
    {
    if(input_str[i]>='a' && input_str[i]<='z')
    {
        input_str[i]=input_str[i]-32;
    }
    else if(input_str[i]>='A' && input_str[i]<='Z')
    {
        input_str[i]=input_str[i]+32;
    }
    }
    printf("%s",input_str);
}