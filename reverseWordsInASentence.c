#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *begin, char *end)
{
    char temp;
    while(begin<end){
        temp=*begin;
        *begin++=*end;
        *end--=temp;
    }
}

void ReverseWords(char *str)
{
    char *wordbegin='\0';
    char *temp = str;
    while(*temp){
        if((wordbegin=='\0')&&(*temp!=' '))
           {
               wordbegin=temp;
           }
        if(wordbegin && (*(temp+1)==' ' || *(temp+1)=='\0')){
            reverse(wordbegin,temp);
            wordbegin='\0';
        }
        temp++;
    }

    reverse(str,temp-1);

}

int main()
{
    char str[100];
    printf("enter string");
  //  fgets(str,100,stdin);
    scanf("%[^\n]s",str);
    ReverseWords(str);
    printf("%s",str);
    return 0;
}
