#include<stdio.h>
main()
{
int vow=0,con=0,dig=0,oth=0,space=0,i;
char a[80],s[80];
printf("\nENTER A LINE OF TEXT:");
scanf(" %[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
s[i]=toupper(a[i]);
}//for
for(i=0;a[i]!='\0';i++)
{
if(s[i]==' ')
{
space=space+1;
}
}//for space
printf("\nwords = %d\n",space+1);
for(i=0;a[i]!='\0';i++)
{
if(s[i]>='0'&&s[i]<='9')
{
dig=dig+1;
}//dig
else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
{
vow=vow+1;
}//vowel
else if(s[i]>='A'&&s[i]<='Z')
{
con=con+1;
}//cons
else
{
oth=oth+1;
}//dig
}//for
printf("\nnumber of vowels=%d\nnumber of consonants=%d\nnumber of digits=%d\nnumber of others=%d\n",vow,con,dig,oth);
}//main
