#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "bhavita";
    char p[8];
    int arr[100] = {0};
    int k = 0, store = 0;
    for(int i = 0; i < strlen(str); i++)
    {
             arr[str[i] - 97]++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] >0)
        {
             store = arr[i];
        }
        while(store > 0)
        {
            strcpy(p[k++], arr[i + 97]);
            store--;
            printf("%c\n",p[k++]);
        }
    }
    printf("%s",p);
}

