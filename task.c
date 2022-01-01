#include<stdio.h>
typedef struct
{
    char name ;
    int age ;
    float GPA ;
} student ;

    void print_info (student p);
      student get_data(void);

void main (void)
{
 student *pdata [100];
    int i;
    int size;
    int max =0;
    int old=0;
    student max_p;
    student old_p;
    print_info;
    printf("enter the number size < 100 = ");
    scanf("%d\n",&size);

    for (i=0; i<size; i++)
    {
        printf("%d\n",i+1);
        printf("name=%s\n",pdata[i]->name);
        scanf("%s\n",&pdata[i]->name);
        printf("age=%d\n",pdata[i]->age);
        scanf("%d\n",pdata[i]->age);
        printf("GPA=%f\n",pdata[i]->GPA);
        scanf("%f\n",pdata[i]->GPA);
    }
        for (i=0; i<size; i++)
        {
            if (pdata[i]->GPA>max)
            {
                max  =pdata[i]->GPA;
                max_p =(*pdata[i]);
            }

        }
        printf("\n");
        printf("oldest student is\n ");
        print_info (max_p);


          for (i=0; i<size; i++)
        {
            if (pdata[i]->age>old)
            {
                old=pdata[i]->age;
                old_p=(*pdata[i]);
            }

        }
        printf("\n");
        printf("oldest student is\n ");
        print_info (old_p);
        }
void print_info (student p)
     {
        printf("name=%s\n",p.name);

        printf("age=%d\n",p.age);

        printf("GPA=%f\n",p.GPA);

     }
  student get_data(void)
  {
      student temp;
            printf("\t name:");
            scanf("%s",&temp.name);
            printf("\t age:");
            scanf("%%d",&temp.age);
            printf("\t name:");
            scanf("%f",&temp.GPA);
            return(temp);

  }





