#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define COUNT 256

char *removeDuplicate(char *str)
{
    int hash[COUNT]={0};
    int i=0,j;
    char temp;
    for(j=0;str[j];j++){
           temp=str[j];
        if(hash[temp]==0){
            hash[temp]=1;
            str[i]=str[j];
            i++;
        }
    }
    str[i]='\0';

    return str;
}

int main()
{
    char str[]="banana";
    char *result=removeDuplicate(str);
    printf("after removal : %s",result);
return 0;
}
