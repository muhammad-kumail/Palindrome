#include<stdio.h>
#include<conio.h>
main()
{
	int n,r=0,o;
	printf("Enter number:\a ");
	scanf("%d",&n);
	o=n;
	while(o%10!=0)
	{
		r*=10;
		r+=o%10;
		o/=10;
	}
	(r==n)?printf("%d is Palindrome number",n):printf("%d is not Palindrome number",n);
	getch();
}
