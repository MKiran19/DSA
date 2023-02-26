#include<stdio.h>
#include<conio.h>
int b_search(int ar[],int n,int el);
main()
{
	int ar[50],n,i,ans,el,dum,j;
	printf("Enter the no of element : ");
	scanf("%d",&n);
	printf("\n Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nSorted array : \n");
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(ar[i]>ar[i+1])
			{
				dum=ar[i];
				ar[i]=ar[i+1];
				ar[i=1]=dum;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\n",i,ar[i]);
	}
	printf("\n\n Enter the elements to be search : ");
	scanf("%d",&el);
	ans=b_search(ar,n,el);
	if(ans==-1)
	printf("\n Elements is not found");
	else
	printf("\n Elements is at %d position",ans);
	getch();
}
int b_search(int ar[],int n,int el)
{
	int l=0,h=n-1,m=(l+h)/2;
	while(l<=h)
	{
		m=(l+h)/2;
       if(el==ar[m])
       return m;
       else if(el>ar[m])
       l=m+1;
       else if(el<ar[m])
       h=m-1;
	}
	return -1;
}
