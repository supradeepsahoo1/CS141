#include<iostream.h>
#include<conio.h>

void main()
{
 float cel, far;
  clrscr();
  cout<<"Enter temp. in Fahrenheit: ";
  cin>>far;
  cel = (far - 32) * 5/9;
  cout<<"Temp. in Celsius: "<<cel;
 getch();
}
