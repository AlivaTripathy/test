#include<stdio.h>
int n,nf;
int in[100],p[50];
int hit=0,i,j,k,pf=0;

void initialise()
{
    pf=0;
    for(i=0;i<nf;i++)
        p[i]=9999;
}

int isHit(int data)
{
     hit=0;
    for(j=0;j<nf;j++)
    {
        if(p[j]==data)
        {
            hit=1;
            break;
        }
    }
    return hit;
}

void display()
{
    for(k=0;k<nf;k++)
    {
        if(p[k]!=9999)
        printf(" %d",p[k]);
    }
}

void fifo()
{
    initialise();
    for(i=0;i<n;i++)
    {
        printf("\nFor %d: ",in[i]);

        if(isHit(in[i])==0)
        {
            for(k=0;k<nf-1;k++)

                p[k]=p[k+1];
            p[k]=in[i];
            pf++;
            display();


        }
        else
            display();
    }
    printf("\nPage fault:%d\n",pf);
}

int main()
{
    printf("Enter the length of reference string:");
    scanf("%d",&n);
    printf("Enter no of frames:");
    scanf("%d",&nf);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&in[i]);

    fifo();
}
