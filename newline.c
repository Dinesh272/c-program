#include<stdio.h>
int main()
{
    char str[200];
    int count=0, i;
    printf("Enter the String\n");
    scanf("%[^\n]s", str);
    for (i = 0;str[i]!='\0';i++)
    {
    	if(str[i] == '\n'|| str[i] == '.')
    	{
    		count++;
    	}
    }
    printf("The no.of lines in the paragaraph %d",count+1);
}
