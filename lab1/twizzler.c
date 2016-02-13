#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
{
	int miles;
	double numOfTwiz;
	printf("Input a distance in miles :");
	scanf("%d",&miles);
	numOfTwiz = (double)(miles*5280*12)/8;
	printf("To build a string of Twizzlers that long, you would need %.2lf Twizzlers",numOfTwiz);
return 0;
}
