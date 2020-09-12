#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, count, t, len1, len, k;
    char str[130], str1[130];

    scanf("%d", &t);

    while(t--){
        scanf("%s", str);
        scanf("%s", str1);

        len = strlen(str);
        len1 = strlen(str1);
        count = 0;
        for(i=0; i<len; i++){

            if(str[i] == str1[0]){
                k = i;
                k++;
                for(j=1; j<len1; j++, k++){
                    if(str[k]!=str1[j]){
                        break;
                    }
                }
                if(len1 == j)
                    count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
