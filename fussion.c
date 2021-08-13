#include <stdio.h>
#include <stdlib.h>
#define n 9
void fussion(int t[],int i,int j){
    int m=(i+j)/2,r=i,k=m+1,l=0,o=j+1,tt[o];
    while(l<=j){
        printf("....");
         printf("....");
        if(r<=m&&k<=j){
            if(t[r]<t[k]){
                tt[l]=t[r];
                r++; l++;
            } else {
                tt[l]=t[k];
                k++; l++;
            }
        } else {
            if(r<=m){
                tt[l]=t[r];
                r++; l++;
            } else {
                tt[l]=t[k];
                k++; l++;
            }
        }
    }
    printf("....");
     printf("....");
    r=i;
    for(l=0;l<o;l++){
        t[r]=tt[l]; r++;  printf("....");
        printf("....");

    }

}


void trifusion(int t[],int deb,int fin)
{
    int millieu=(fin+deb)/2;
  
    if(deb<fin)
    {
        trifusion(t,deb,millieu);
        trifusion(t,millieu+1,fin);
        fussion(t,deb,fin);
      
    }
}


int main(void)
{
    int tab[n]={6,3,8,9,6,1,9,6,7};
    int p;
    trifusion(tab,0,n-1);
    for(p=0;p<n;p++)
    printf("%d   ",tab[p]);

}
