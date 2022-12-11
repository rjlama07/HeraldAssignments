#include<stdio.h>
#include<string.h>

char *sortData(char string[])
{
     for(int i=0;i<strlen(string);i++)
    {
        for(int j=i+1;j<strlen(string);j++)
        {
            if(string[i]>string[j])
            {
               char temp= string[i];
               string[i]=string[j];
               string[j]=temp;

            }
        }
    }
    return string;

}
int compare_string(char first_string[], char second_string[])
{
    for (int i = 0; i < strlen(first_string); i++)
    {
        if (first_string[i] != second_string[i])
            return 0;
    }
    return 1;
}


void main(){
    char str1[6]="stop";
    char str2[6]="post";
    
    char *firstString=sortData(str1);
    char *secondString=sortData(str2);
    if(compare_string(firstString,secondString))
    {
        printf("It is anagram");
    }
    else{
        printf("It is not anagram");
    }
    

    
}