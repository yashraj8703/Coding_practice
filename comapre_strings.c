#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int str_comp(char *str1,char *str2)
{
    if(strlen(str1)!=strlen(str2)) return 1;
    int i=0;
    while(str1[i]!='\0' || str2[i]!='\0'){
        if(str1[i]!=str2[i]) return 1;
        i++;
    }
    return 0;
}
int main() {
    char str1[100];
    scanf("%[^\n]", str1);
    char str2[100];
    getchar();
    scanf("%[^\n]", str2);
    if (str_comp(str1, str2) == 0) {
        printf("Strings are equal");
    } else {
        printf("Strings are not equal");  
    }
    return 0;
}

