#include<stdio.h>
#include<string.h>
char name[3][15];
char  id[3][5];
double cgpa[3];

char ctemp[15];
double dtemp;

void print_cgpa()
{
      for(int i = 0; i < 3; i++)
        printf("%.2lf %s %s\n", cgpa[i], name[i], id[i]);

    printf("\n");
}
void print_id()
{
    for(int i = 0; i < 3; i++)
        printf("%s %s %.2lf\n", id[i], name[i], cgpa[i]);

    printf("\n");
}

void print_name()
{
    for(int i = 0; i < 3; i++)
        printf("%s %s %.2lf\n", name[i], id[i], cgpa[i]);

    printf("\n");
}
void id_sort()
{
    double dtemp;
     for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(strcmp(id[i], id[j]) > 0){
                strcpy(ctemp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], ctemp);

                strcpy(ctemp, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], ctemp);

                dtemp = cgpa[i];
                cgpa[i] = cgpa[j];
                cgpa[j] = dtemp;

            }
        }
    }
    print_id();
}
void cgpa_sort()
{

     for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(cgpa[i] < cgpa[j]){
                strcpy(ctemp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], ctemp);

                strcpy(ctemp, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], ctemp);

                dtemp = cgpa[i];
                cgpa[i] = cgpa[j];
                cgpa[j] = dtemp;

            }
            else if(cgpa[i] == cgpa[j]){
               if(strcmp(id[i], id[j]) < 0){
                strcpy(ctemp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], ctemp);

                strcpy(ctemp, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], ctemp);

                dtemp = cgpa[i];
                cgpa[i] = cgpa[j];
                cgpa[j] = dtemp;

            }
            }
        }
    }
    print_cgpa();
}
void name_sort()
{
     for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(strcmp(name[i], name[j]) > 0){
                strcpy(ctemp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], ctemp);

                strcpy(ctemp, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], ctemp);

                dtemp = cgpa[i];
                cgpa[i] = cgpa[j];
                cgpa[j] = dtemp;

            }
        }
    }
    print_name();
}

int main()
{
    int n;
    for(int i = 0; i < 3; i++){
        scanf("%s", name[i]);
        scanf("%s", id[i]);
        scanf("%lf", &cgpa[i]);
    }

    while(1){
        printf("\n0 for exit\n1 for name sort\n2 for id sort\n3 for cgpa sort\n\tEnter: ");
        scanf("%d", &n);
        printf("\n");
        if(n == 0)
            return 0;
        else if(n == 1)
            name_sort();
        else if(n == 2)
            id_sort();
        else if(n == 3)
            cgpa_sort();

    }
    return 0;
}
