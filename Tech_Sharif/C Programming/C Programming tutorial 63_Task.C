#include<stdio.h>
#include<string.h>
char n1[100], n2[100];

void remove_zero(char ch[])
{
    char ch1[100];
    int j , i = 0;
    while(ch[i] == '0')
        i++;
    for(int j = 0; j < strlen(ch); j++, i++)
            ch1[j] = ch[i];
    strcpy(ch, ch1);

}
int main()
{
    while(scanf("%s%s", n1, n2) != EOF){
        printf("\n%s %s\n", n1, n2);
        if(n1[0] == '0')
            remove_zero(n1);
        if(n2[0] == '0')
            remove_zero(n2);
        printf("\n%s %s\n", n1, n2);

        if(strlen(n1) > strlen(n2))
            printf("a > b\n");

        else if(strlen(n1) < strlen(n2))
            printf("a < b\n");

        else if(strcmp(n1, n2) == 0)
            printf("a = b\n");

        else if(strcmp(n1, n2) > 0)
            printf("a > b\n");

        else
            printf("a < b\n");

    }
    return 0;
}
