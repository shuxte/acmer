#include<stdio.h>

void sort(char *str)
{
    char c;
    if(str[0] > str[1])
    {
        c = str[0];
        str[0] = str[1];
        str[1] = c;
    }
    if(str[1] > str[2])
    {
        c = str[1];
        str[1] = str[2];
        str[2] = c;
    }
    
    if(str[0] > str[1])
    {   
        c = str[0];
        str[0] = str[1];
        str[1] = c;
    }   
    if(str[1] > str[2])
    {   
        c = str[1];
        str[1] = str[2];
        str[2] = c;
    }
    printf("%c %c %c\n",str[0],str[1],str[2]);
}

int main()
{
    char str[3];
    while(~scanf("%s",str))
    {
        sort(str);
    }
}
