#include<stdio.h>
void main() { 

int a,b,c,i; 

 

printf("1.Add/n 2.Sub /n 3.Mul /n 4.Div /n Enter Your choice"); 
scanf("%d",&i); 

 

printf("Enter a,b values"); 
scanf("%d%d",&a,&b); 
switch(i){ 

 

case 1: c=a+b; 

 

printf(" The sum of a & b is: %d",c); break; 

 

case 2: c=a-b; 

 

printf("The Diff of a & b is: %d",c); break; 

case 3: c=a*b; 

 

printf("The Mul of a & b is: %d",c); break; 

 

case 4: c=a/b; 

 

printf(" The Div of a & b is: %d",c); break; 

default: 

 

printf("Enter your choice"); break; 

}
 

} 
