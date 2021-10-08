#include<stdio.h>  
int main()    
{    
    int n,r,sum=0,temp;    
    printf("Enter the number to check : ");    
    scanf("%d",&n);    
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
    printf("The number is palindrome");    
    else    
    printf("The number is not palindrome");   
    return 0;  
}