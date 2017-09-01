#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float r, area, circum;
	cout<<"Enter the radius of the circle :";
	cin>>r;
	area=3.14*r*r;
	circum=2*3.14*r;
	cout<<"Area of the circle = "<<area<<"\nCircumference of the circle = "<<circum<<"\n";
	getch();
}
