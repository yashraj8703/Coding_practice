#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
    char str1[100];
    scanf("%[^\n]", str1);
    int n=strlen(str1);
    int char_count[256]={0};
    int lar=0;
    char max_char = str1[0];
    for(int i=0;i<n;i++)
    {
        char_count[str1[i]]+=1;
    }
    for (int i = 0; i < 256; i++) {
        if (char_count[i] > lar) {
            lar=char_count[i];
            max_char = i;
        }
    }
    printf("Character '%c' appears %d times\n", max_char, lar);
}
