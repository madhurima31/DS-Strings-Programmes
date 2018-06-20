#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *reverse(char * str)
{
    int begin =0;
    int end= strlen(str) -1;
    char temp;
    while(begin<end){
        temp = str[begin];
        str[begin++]=str[end];
        str[end--]=temp;
    }

    return str;
}

int main()
{
    char str[10];
    scanf("%s",str);
    printf("%s",reverse(str));
    return 0;
}
