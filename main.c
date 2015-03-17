#include <stdio.h>

#define max 999

int main()
{
    int b,i = 0,a = 0,z = 1,c=0;
    char chislo[max];
    scanf("%s",&chislo);
    b = strlen(chislo);
    if (chislo[0]>'9' || chislo[0] <'0')
        if(chislo[0]!='-' && chislo[0]!='+')
        {
            printf("Wrong input number!!");
            return 0;
        }
    while(z < b)
    {
        if (chislo[z]>'9' || chislo[z] <'0')
        {
            printf("Wrong input number!!");
            return 0;
        }
        z++;
    }//ako iskate dali dadeno niz e chislo tuk napishete:
    //printf("Yes");
    b = b - 1;
    while(b >= 0)
    {
        z = 1;
        c = 0;
        while(c < i)
        {
            z = z * 10;
            c++;
        }
        a = a + ((chislo[b] - 48)* z);
        i++;
        b = b - 1;
    }
    if(chislo[0]=='-' || chislo[0] =='+')
    {
        a = a - ((chislo[0] - 48)* z);
    }
    if(chislo[0]=='-')
        a = -a;
    printf("\n%d",a);
    return 0;
}
