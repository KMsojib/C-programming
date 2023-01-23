#include<stdio.h>
int main()
{
	int ara[]={12,7,9,3,15,2,6,5};
	int i,j;
	int N=sizeof(ara)/sizeof(ara[0]);
	printf("%d\n",N);
	
	for(i=0;i<N;i++){
		for(j=0;j<N-1;j++){
			if(ara[j]>ara[j+1]){//ara er i tomo index er chey jodi i+1 tomo index
				int temp=ara[j];//boro hoy tahole swap hoye jabe
				ara[j]=ara[j+1];
				ara[j+1]=temp;
			}	
		}
	}
	for(i=0;i<N;i++)
		{
			printf("%d ",ara[i]);
		}
		printf("\n");
	return 0;
}
