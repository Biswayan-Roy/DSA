#include<stdio.h>

int main()
{
	int a[10];
    int i,j,key;

    for(i=0 ;i<10 ;i++)
    {
    	printf("enter no. %d\n",i+1 );
    	scanf("%d",&a[i]);
    }

    for(j=1 ;j<10 ;j++)
    {
      key = a[j];

      i = j - 1;

      while(a[i]>key && i>=0 )
      {
      	a[i+1] = a[i];

      	i = i - 1;
      }

      a[i+1] = key;
    }

    for(i=0 ;i<10 ;i++)
        printf("%d ",a[i]);


	return 0;
}