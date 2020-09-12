#include<stdio.h>

int main()
{
    int a, b, lcm, t;

    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);

        for(lcm = a>b?a:b; lcm<=a*b;lcm +=(a>b?a:b))
                if(lcm%a==0 && lcm%b==0)
                    break;
        printf("LCM = %d\n", lcm);


    }

    return 0;
}
