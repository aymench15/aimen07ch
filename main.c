#include <stdio.h>
#include <stdlib.h>
#define n 8
int pivot(int t[],int i,int j)
{
    int pivott=j,u,x=i-1,xx;
    for(u=i;u<j;u++)
    {
        if(t[u]<=t[pivott] )
        {
            x++;
        xx=t[u];
        t[u]=t[x];
        t[x]=xx;
        }
    }
       xx=t[x+1];
        t[x+1]=t[pivott];
        t[pivott]=xx;
        return x;
}
    
void partition(int t[],int deb,int fin)
{
    int indice;

    if(deb<fin)
    {
        indice=pivot(t,deb,fin);
        partition(t,deb,indice);
        
        partition(t,indice+1,fin);
  
    }
}


int main()
{
    int t[n]={8,7,6,5,4,3,2,1};
    int p;
partition(t,0,n-1);
    printf("\n \n ");
    for(p=0;p<n;p++)
    printf("%d   ",t[p]);

}
