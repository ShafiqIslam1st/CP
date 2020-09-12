#include<stdio.h>
#include<ctype.h>

int main()
{
    int i, count, t;
    char ch[10001];

    scanf("%d", &t);
    while(t--){
        scanf(" %[^\n]", ch);
        count = 1;
        for(i=0; ch[i]!='\0'; i++){
            if(isspace(ch[i]))
                count++;
        }
        printf("Count = %d\n", count);
    }
    return 0;
}
