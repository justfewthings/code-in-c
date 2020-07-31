#include<stdio.h>
#include<stdlib.h>
void add();
void rev();
void average();
void pattern();
const char* word(int num);
int main()
{
	int ch,numb;
	char opt;
	printf("-----------Menu------------\n");
	printf("\n1)Sum of digits of no\n2)Reverse of no.\n3)Average of n nos inputted\n4)Generate a table of triangular nos\n5)Print no in words\n----------------------\n");
	do
	{
	printf("\nEnter your choice:\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1: 
			add();
			break;
		case 2: 
			rev();
			break;
		case 3: 
			average();
			break;
		case 4: 
			pattern();
			break;
		case 5: 
			printf("Enter number\n");
			scanf("%d", &numb);
		    word(numb);
			break;
		case 6: exit(0);
		default:
			printf("invalid input\n");
			break;
	}
}while(ch <= 6);
return 0;
}
void add()
{
		int n,s=0;
		printf("enter a no ");
		scanf("%d", &n);
		while(n != 0)
		{
			s = s+n%10;
			n =n/10;
		}
		printf("sum is %d",s);
}
void rev()
{
	int n,s=0;
	printf("enter a no ");
	scanf("%d", &n);
	while(n !=0)
	{
		s = (s*10)+n%10;
		n = n/10;
	}
	printf("Reverse is %d",s);
}
void average()
{
	int tot,i,num;
	double avg =0.0;
	printf("enter total no. of elements\n");
	scanf("%d", &tot);
	printf("\nEnter numbers to be added\n");
	for(i=0;i<tot;i++)
	{
	scanf("%d",&num);
	avg += num;
	}
	printf("average of numbers = %lf",avg/tot);
}
void pattern()
{
    int n;
    printf("\nEnter n for table of n triangular numbers");
    scanf("%d",&n);
    int i, j = 1, k = 1;
	for (i = 1; i <= n; i++) 
	{
        printf(" %d ", k);
        j = j + 1;
        k = k + j;
    }

}
char const* word(num)
{
	char *ones[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	char *twodgt[] = {"ten", "eleven", "twelve","thirteen", "fourteen","fifteen", "sixteen","seventeen", "eighteen", "nineteen"};
	char *ties[] ={" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	if (num < 10) {
            printf("%s\n",ones[num]) ;
        } 
	else if (num < 20) {
            printf("%s",twodgt[num - 10]);
        } 
	else if (num < 100) {
            printf("%s ",ties[num/10]);
            printf("%s ",ones[num%10]);
        }
    else if (num < 1000) {
            printf("%s",ones[num/100]);
            printf(" Hundred ");
            if((num%100)!=0){
            printf("%s",word(num%100));
            }
        }
    else if (num < 10000) {
            printf("%s",ones[num/1000]);
            printf(" Thousand ");
            if(num%1000!=0){
            printf("%s",word(num%1000));
            }
		}
    return "";
}
