#include <stdio.h>
#include <string.h>

int main() {
    char user[100],pass[100];int len=0;
    char sym[]={"~,$,@,!,%,^,&,*,(,),_,-,=,+"};
    printf("Enter username : ");
    scanf("%s",user);
    printf("Enter password : ");
    scanf("%s",pass);
    len=strlen(pass);
    for(int i=0;i<=len;i++)
    {
        if(pass[i]>='a' && pass[i]<='z')
        {
            pass[i]=pass[i]-1;
        }
        else if(pass[i]>='A' && pass[i]<='Z')
        {
            pass[i]=pass[i]-1;
        }
        else if(strcmp(&pass[i],sym)!=0)
        {
            pass[i]=pass[i]-1;
        }
        else if(pass[i]>='0' && pass[i]<='9')
        {
            pass[i]=pass[i]+2;
        }
    }
    printf("Loading encrypted pass...");
    printf("\n%s\n\n",pass);
    return 0;
}