#include<Stdio.h>

void main(){
    char day[7][10];
    
    for(int i=0;i<7;i++)
    {
        printf("Enter Day %d:",i+1);
        scanf("%s",&day[i]);

    }
    for(int i=0;i<7;i++)
    {
        printf("\nDays are %s\n",day[i]);    
    }

}