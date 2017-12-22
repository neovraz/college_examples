#include<stdio.h>

void bubblesort();
void accept();

int a[100],n,i,j,temp;

int main()
{

	accept();
	bubblesort();



return 0;

}

void accept()
	{

	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
 
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	}



void bubblesort()
	{
	for(i=1;i<=n;i++)
	{

	for(j=1;j<=(n-i);j++)
	{
	
	if (a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}

	}

	}

	for(i=1;i<=n;i++)
	{
	printf("\t%d",a[i]);
	}


}
