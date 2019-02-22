#include <stdio.h>
#include <stdlib.h>
int kprasad(int *, int *);
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,0};
     kprasad(&a[0],&b[0]);
    printf("Hiiii\n");
    return 0;
}

int kprasad(int *p, int *q)
{
   
    for(int i=0; i<5; i++)
    {
       static int temp=0;
       temp=*q;
       *p=*q;
       *q=temp;
       q++;
       p++;

    }
    return 0;
}
