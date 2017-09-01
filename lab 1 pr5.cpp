#include <stdio.h>
#include <conio.h>
 
int main(){
 float length, width, perimeter;
 printf("Enter length of Rectangle\n");
 scanf("%f", &length);
 printf("Enter width of Rectangle\n");
 scanf("%f", &width);
 /* Perimeter of Rectangle = 2 X(Length + Width) */
 perimeter = 2*(length + width);
 printf("Perimeter of Rectangle : %0.4f\n", perimeter);
  
 getch();
 return 0;
}
