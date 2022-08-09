#include<stdio.h>
#include<math.h>

int add(int no1,int no2)
{
	int ans;
	ans=no1+no2;
	printf("addition of two numbers is %d\n",ans);
	return ans;
}
int sub(int no1,int no2)
{
	printf ("substraction of two numbers is %d\n",no1-no2);
	return (no1-no2);
}
void accept (char no1)
{
		printf ("you have entered %c\n",no1);
		
}
void joint(char no1, char no2, char no3)
{
	printf ("joint the %c%c%c\n",no1,no2,no3);
}
void combine (char input1,int input2)
{
	printf ("entered %c%d\n",input1,input2);
	
}
void square (int no1)
{
	printf ("square is %d\n",no1*no1);
	
}

int main()
{
	add(4,5);
	add(10,9);
	sub(20,9);
	accept('M');
	joint ('M','P','G');
	combine ('M',19);
	square (20);
	printf("%f\n",sqrt(9));
	printf("%d\n",add(9,4));
	

	return 0;
}
