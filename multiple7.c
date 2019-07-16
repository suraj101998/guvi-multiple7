#include <stdio.h>
int main ( )
{ 
    int num1;
    scanf("%d",&num1);
    if (num1 % 7 == 0){
       printf("yes\n", num1);
       }
    if (num1 % 7 != 0){
       printf("no\n", num1);
       }
    return 0;
}
