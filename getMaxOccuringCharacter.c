#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define COUNT 256

char max_occuring_element(char *str)
{
    int hash[COUNT]={0},i;
    int len=strlen(str);
    int max = -1;
    char maxoccuringchar;
    for(i=0;i<len;i++)
        hash[str[i]]++;
    for(i=0;i<len;i++){
        if(hash[str[i]]>max){
            max=hash[str[i]];
            maxoccuringchar=str[i];
        }
    }

    return maxoccuringchar;
}

int main()
{   int n;
    printf("enter number of charecters in string");
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    char result = max_occuring_element(str);
    printf("%c",result);

    return 0;
}
