//Program to check if a string is a palindrome or not
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isPalindrome(char str[], int n);
    int main()
    {
    char str[20];
    printf("Enter the string: ");
    gets(str);
    printf("The string entered is ");
    puts(str);
    int n = strlen(str);
    if(isPalindrome(str,n))
        printf("%s is a palindrome", str);

    else 
        printf("%s is not a palindrome", str);
   
        return 0;
    }

    bool isPalindrome(char str[], int n)
    {
         for(int i = 0 ; i< n/2; i++)
        {
            if(str[i]!=str[n-i-1])
                {printf("$\n");
                return false;}
        }
        printf("#\n");
        return true;
    }