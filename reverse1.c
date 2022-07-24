#include<stdio.h>
#include<string.h>
//Program to enter a string and print it in reverse order
    int main()
    {
    char str[20];
    printf("Enter a string: ");
    gets(str);
    printf("The string entered is : ");
    puts(str);
    int len=strlen(str);
    printf("The length of the string is %d\n",len);
    for (int i = len-1; i >=0; i--)
    {
        printf("%c",str[i]);
    }
    
        return 0;
    }