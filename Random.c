#include<stdlib.h>

#include<stdio.h>


int largest(int[],int,int);


int main()

{

	int n=10,i;

	int a[n];

	for(i=0;i<n;i++)

	{

		printf("\nEnter no. of for s%d: ",i+1);

		scanf("%d",&a[i]);

	}


	int last=10000;//largest value that no. of gift not exceed
    int num=0,temp;

    printf("\nBilling Order: \n");

	for(i=0;i<n;i++)

    {

		num=largest(a,last,n);

		printf("s%d: %d\n",num+1,a[num]);

		last=a[num];

	}


}


int largest(int a[],int last,int n)

{

	int num;
    int i;
	int l=-1;//this value is less than smallest no. of gifts

	for(i=0;i<n;i++)

	{


		if(a[i]>l && a[i]<last)

		{

			l=a[i];

			num=i;

		}

	}

return num;

}







