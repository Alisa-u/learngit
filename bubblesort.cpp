#include<stdio.h>
void BubbleSort(int *arr,int len)
{
	int tmp;
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
void Show(int *arr,int len)
{
	for(int i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {2,1,5,7,6,0,4,3};
	BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
	Show(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}