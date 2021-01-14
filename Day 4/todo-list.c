#include <stdio.h>
#include <string.h>

struct todo{
    int sno;
    char tsk_n[100];
    char dt_cp[10];
    char note[100];
}t[20];
int main() {
    int n;
    printf("How many tasks for today ?\n");
    scanf("%d",&n);printf("\n");
    if(n<=5){printf("%d? Let's finish them asap!\n\n",n);}
    else if(n>5 && n<=10){printf("%d? Slow and steady wins the race! Let's go\n",n);}
    else if(n>10 && n<=20){printf("%d? It's a lot but you can do it! Let's go\n",n);}
    for(int i=0;i<n;i++)
    {
        printf("\n******************\n");
        t[i].sno=(i+1);
        printf("Enter task name :\n");
        scanf("%s",t[i].tsk_n);printf("\n");
        printf("Enter tentative date to complete :\n");
        scanf("%s",t[i].dt_cp);printf("\n");
        printf("Enter additional notes :\n");
        scanf("%s",t[i].note);printf("\n");
        printf("\n******************\n");
    }
    printf("\nSaved ! Here are the tasks for today :\n");
    for(int i=0;i<n;i++)
    {
        printf("\n******************\n");
        printf("%d. ",t[i].sno);
        printf("Task name : %s\n",t[i].tsk_n);
        printf("Date to complete : %s\n",t[i].dt_cp);
        printf("Additional notes : %s\n",t[i].note);
        printf("\n******************\n");
    }
    return 0;
}