#include<stdio.h>
#include<string.h>


void *sortString(char string[])
{
    char temp;
    int len = strlen(string);
    printf("%d",len);
    return string;
}
int compareString(char str1[],char str2[]){
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
    }
    return 1;

}

void main(){
    char str1[4]="abcd";
    char str2[4]="bacd";
    
    sortString(str1);
    // char *first_string=sortString(str1);
    // char *second_string=sortString(str2);
    // printf("%s\n",first_string);
    // printf("%s\n",second_string);
    // if(compareString(first_string,second_string))
    // {
    //     printf("String is anagram");
    // }
    // else
    // {
    //     printf("String is not anagram");
    // }

}