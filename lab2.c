#include<stdio.h>
#include<stdlib.h>
void insert_pos(int *arr,int *len,int value,int place);
void insert_beg(int *arr,int *length,int value);
void insert_end(int *arr,int *len,int value);
void del_pos(int*arr, int *len,int place);
void del_ele(int element);
void search_pos(int arr[],int place);
int bin_search(int arr[],int low, int high,int x);
void revert(int *arr,int end);
void print_arr(int *a,int n);

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main()
{
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
    int c;
    int value,place;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len = (int)(sizeof(arr)/sizeof(arr[0]));
    print_arr(arr,len);

    do
    {


                printf("Enter your choice:\t");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                            printf("Enter the value and position :\t");
                            scanf("%d %d",&value,&place);
                            insert_pos(arr,&len,value,place);

                            break;
                        case 2:
                            printf("\n Enter the value:\t");
                            scanf("%d",&value);
                            insert_beg(arr,&len,value);
                            break;
                        case 3:
                            printf("\n Enter the value:\t");
                            scanf("%d",&value);
                            insert_end(arr,&len,value);
                            break;
                        case 4:
                            printf("\n Enter the position to be deleted:\t");
                            scanf("%d",&place);
                            if(place>len || place<1)
                                    printf("Enter valid position(0<position<=%d)",len );
                            else
                            {
                            del_pos(arr,&len,place);}
                            break;
                        case 5:
                            qsort(arr, len, sizeof(int), cmpfunc);
                            printf("\n Enter the element to be deleted:\t");
                            scanf("%d",&value);
                            int p=bin_search(arr,0,len-1,value);
                            (p==-1)? printf("Element not present\n"):del_pos(arr,&len,p+1);



                            break;
                         case 6:
                            printf("\n Enter the position to be searched:\t");
                            scanf("%d",&place);
                            if(place>len || place<1)
                                    printf("Enter valid position(0<position<=%d)",len );
                            else
                            {
                                    search_p(arr,place);
                            }

                            break;
                         case 7:
                            qsort(arr, len, sizeof(int), cmpfunc);
                            printf("\n Enter the value to be searched:\t");
                            scanf("%d",&value);
                            int result=bin_search(arr,0,len-1,value);
                            (result==-1)? printf("Element not present\n"):printf("Element present at index %d\n",result);
                            break;
                         case 8:
                            printf("\n Reverting the array...\n");

                            revert(arr,len);
                            break;
                        case 9:
                            exit(0);
                        default:
                            printf("Enter valid choice\n");


    }
    }while(c<=9);
return 0;


}
void print_arr(int *a,int n)
{
    int i;

	for(i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    }
}

void insert_pos(int *arr,int* len,int value,int place)
{
    int num = *(len);
    num++;

    for(int i=num;i>=place;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[place-1]=value;
    print_arr(arr,num);
    *(len)=num;

}
void insert_end(int *arr,int *len,int value)
{
    int n=(*(len)+1);
    insert_pos(arr,len,value,n);
    return;
}
void insert_beg(int *arr,int *len,int value)
{
    insert_pos(arr,len,value,1);
    return;
}
void del_pos(int *arr,int *len,int pos)
{
    for(int i=pos-1; i<*(len)-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        *(len)=*(len)-1;
        print_arr(arr,*len);
    return;
}
void del_ele(int value)
{

    return;
}
void search_pos(int arr[],int value)
{
    printf("Value at the position is %d\n",arr[value+1]);
    return;
}
int bin_search(int arr[],int low, int high,int x)
{



        int mid = low + (high-low) / 2;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return bin_search(arr, low, mid - 1, x);


        if (arr[mid]<x)
            return bin_search(arr, mid + 1, high, x);



    return -1;
}

void revert(int *arr,int n)
{
    int end=n-1;
    int t,c=0;
    while(c<n/2)
   {
    t          = arr[c];
    arr[c]   = arr[end];
    arr[end] = t;

    end--;
    c++;
   }
   print_arr(arr,n);
   return;

   }


