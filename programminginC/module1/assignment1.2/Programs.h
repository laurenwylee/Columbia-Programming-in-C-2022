#include<stdio.h>

int factorial() 

{

int n;

printf("Enter a number to calculate the factorial:\n");
scanf("%d", &n);

while(n >= 10){
    printf("%d is not less than 10, please input another number",n);
    scanf("%d", &n);
}

retval = 1;
for(int i = 1; i<=n; ++i){
    retval = retval*i;
}

return retval;

}

int main()

{

factorial() ;

}