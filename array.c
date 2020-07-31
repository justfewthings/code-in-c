#include<stdio.h>
#include<stdlib.h>
void insert_pos(int arr[],int size);
void insert_beg(int arr[],int size);
void insert_end(int arr[],int size);
void del_pos(int arr[],int size);
void del_ele(int arr[],int size);
void search_pos(int arr[],int size);
void search_ele(int arr[],int size);
void revert(int arr[],int size);
int main()
{
	int ch;
    printf("\n\n--------Menu-----------\n");
                printf("1.Insert at position\n");
                printf("2.Insert at beginning \n");
                printf("3.insert at end\n");
                printf("4.Delete by position \n");
                printf("5.Delete element\n");
                printf("6.Search at position\n");
                printf("7.Search element\n");
                printf("8.Revert the array\n");
                printf("9.Exit\n");

                printf("-----------------------\n");
    int size,i;
	printf("Enter array size\n");
	scanf("%d", &size);
	int arr[size];
	printf("\nEnter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t", arr[i]);
	}
    
    do
    {


                printf("\nEnter your choice:\t");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                            insert_pos(arr,size);
                            break;
                        case 2:
                            insert_beg(arr,size);
                            break;
                        case 3:
                            insert_end(arr,size);
                            break;
                        case 4:
                            del_pos(arr,size);
                            break;
                        case 5:
                        	del_ele(arr,size);
                            break;
                         case 6:
                            search_pos(arr,size);
                            break;
                         case 7:
                            search_ele(arr,size);
                            break;
                         case 8:
                         	revert(arr,size);
                        	break;
                        case 9:
                            exit(0);
                        default:
                            printf("Enter valid choice\n");


    }
    }while(ch<=9);
return 0;
}
void insert_pos(int arr[],int size)
{
	int i;
	size++;
	int x,pos;
	printf("\nenter no to be inserted\n");
	scanf("%d", &x);
	printf("\nEnter position\n");
	scanf("%d", &pos);
	for (i = size; i >= pos; i--){ 
        arr[i] = arr[i - 1];
	}
	arr[pos - 1] = x;
    for (i = 0; i < size; i++){ 
        printf("%d\t", arr[i]);
	}
    printf("\n"); 
}
void insert_beg(int arr[], int size)
{
	int i;
	size++;
	int x,pos=0;
	printf("\nenter no to be inserted\n");
	scanf("%d", &x);
	for (i = size; i >= pos; i--){ 
        arr[i] = arr[i - 1];
	}
	arr[pos] = x;
    for (i = 0; i < size; i++){ 
        printf("%d\t", arr[i]);
	}
    printf("\n"); 	
}
void insert_end(int arr[], int size)
{
	int i;
	size++;
	int x,pos=size;
	printf("\nenter no to be inserted\n");
	scanf("%d", &x);
	for (i = size; i >= pos; i--){ 
        arr[i] = arr[i - 1];
	}
	arr[pos - 1] = x;
    for (i = 0; i < size; i++){ 
        printf("%d\t", arr[i]);
	}
    printf("\n"); 	
}
void del_pos(int arr[],int size)
{
	int i,pos;
	printf("\nenter position to be deleted\n");
	scanf("%d", &pos);
	for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    printf("\nElements of array after delete are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void search_ele(int arr[],int size)
{
	int i,pos,n;
	printf("Enter element to search\n");
	scanf("%d", &n);
	for(i=0;i<size;i++)
	{
		if(arr[i] == n)
		{
			pos = i;
			printf("\nElement found at %d ", pos);
		}
	}
}
void search_pos(int arr[],int size)
{
	int i,pos,n;
	printf("\nEnter element to search\n");
	scanf("%d", &n);
	printf("Enter position to search\n");
	scanf("%d", &pos);
	if(arr[pos] == n)
		{
			printf("\nElement found\n");
		}
		else
		{
			printf("\nElement not found\n");
		}
}
void revert(int arr[],int size)
{
	int i;
	printf("\nAfter reversing array\n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d\t", arr[i]);
	}
	
}
void del_ele(int arr[],int size)
{
	int i,found,pos,n;
	printf("\n enter element to delete\n");
	scanf("%d",&n);
	for(i = 0; i < size; i++)
    {
        if(arr[i] == n)
        {
            found = 1;
            pos = i;
            break; 
        }
    }
    if(found == 1) 
    {
        for(i = pos; i < size-1; i++)
            arr[i] = arr[i+1];
    }
    for(i=0;i<size-1;i++)
    {
    	printf("%d\t", arr[i]);
	}
}
