//Write a program to input two matrices of size r×c and determine the sum.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int a[10][10],b[10][10],res[10][10];
   int r,c,i,j;
   //number of row and column
   printf("Enter number of rows and column for both matrices\n");
   scanf("%d %d",&r,&c);

   //input in first array
   for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        printf("Enter element for a%d%d: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }

   //input in second array
   
   for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        printf("Enter element for b%d%d: ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
   //adding both array
   for(i=0;i<r;i++)
    for(j=0;j<c;j++)
        res[i][j]=a[i][j]+b[i][j];

   //result
    printf("Sum of both array is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",res[i][j]);
            
        printf("\n");        
    }
      
   //getch()
}