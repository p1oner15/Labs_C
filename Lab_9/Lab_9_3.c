#include <stdlib.h>
#include <conio.h>
const int M = 50;
int main(){
char str[M],str1[M];
int i,c=0,b=0;
printf("Введите строку:\n");
gets(str);
for(i=0;(str[i]<=48||str[i]>=57)&&str[i]!='\0';i++){
}
if(str[i]!=0)
while(str[i]>=48&&str[i]<=57&&str[i]!='\0'||str[i]=='.') {
str1[c]=str[i];
if(str[i]=='.')
b=c; c++;
i++; }
if(!b) b=c;
str1[c]='\0';
printf("Целая часть числа %s содержит %d цифр.\n",str1,b);
str[0]=getch; return 0; 
}
