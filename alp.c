#include<stdio.h>
void main()
{
char ch;
scanf("%c",&ch);
if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'z'))
{
printf("alphabet");
}
else
{
printf("not an alphabet");
}
}
