#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool checkRotation(char *str1, char *str2)
{
    int len1=strlen(str1), len2=strlen(str2);
    if(len1!=len2)
        return false;
    char *temp;
    void *ptr;
    temp = (char *)malloc(sizeof(char)*(len1*2 +1));
    temp[0]='\0';
    strcat(temp,str1);
    strcat(temp,str1);
    ptr=strstr(temp,str2);
    free(temp);
    return ptr?true:false;
}

int main()
{
    printf("enter string 1");
    char str1[10], str2[10];
    scanf("%s", str1);
    printf("enter string 2");
    scanf("%s",str2);
    if(checkRotation(str1,str2)){
        printf("there is rotation");
    }
    else{
        printf("no rotation");
    }

    return 0;
}
