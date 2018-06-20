
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *isPallindrome(char * str)
{
    int begin =0;
    int end= strlen(str) -1;

    while(begin<end){
      if(str[begin]!=str[end])
        return 0;
      begin ++;
      end--;
    }

    return 1;
}

int main()
{
    char str[10];
    scanf("%s",str);
    if(isPallindrome(str)){
       printf("pallindrome");
    }
    else{
        printf("not pallindrome");
    }

    return 0;
}
