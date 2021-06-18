#include<stdio.h>
void towerOfHanoi(int diskNumber,int startpeg, int endpeg){
	if(diskNumber == 1)
	{
		printf("move disk 1 from peg %d to peg %d\n",startpeg,endpeg);
		return 0;
	}
	else{
		towerOfHanoi(diskNumber-1,startpeg,6-startpeg-endpeg);
		printf("move disk %d from peg %d to peg %d .\n",diskNumber,startpeg,endpeg);
		towerOfHanoi(diskNumber-1,6-startpeg-endpeg,endpeg);
	}
}
int main()
{
	printf("enter the total number of disks: ");
	int n;
	scanf("%d",&n);
	printf("initially %d disks are on peg 1 and we have to shift them on peg 3 using peg 2 \n",n);
	towerOfHanoi(n,1,3);
	
}
