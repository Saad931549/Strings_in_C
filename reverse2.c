#include<stdio.h>
#include<string.h>
//function that takes string as argument and reverses it
    void reverseStr(char str[]);
    int main()
    {
    char str[50];
    strcpy(str,"I love big books");
    reverseStr(str);
    puts(str);
        return 0;
    }
    void reverseStr(char str[])
    {
        int i,j;
        char temp;
        for ( i = 0, j=strlen(str)-1; i<=j; i++,j--)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        
    }