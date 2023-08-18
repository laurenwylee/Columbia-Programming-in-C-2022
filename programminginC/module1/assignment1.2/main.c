#include<stdio.h>

int factorial() 

{

int n;

printf("Enter a number to calculate the factorial:\n");
scanf("%d", &n);

//while loop loops until a valid input is given
while(n >= 10){
    printf("%d is not less than 10, please input another number\n",n);
    scanf("%d", &n);
}

int retval = 1;
//while loop starts with 1 is if n=0, will return 1
//if n=0, the forloop will not be performed
for(int i = 1; i<=n; ++i){
    retval = retval*i; //evaluates in format 1 * 1+1 * 1+2 ...*n
}

printf("factorial of %d is %d\n", n, retval);
return retval;

}

int main()

{

return factorial();

}