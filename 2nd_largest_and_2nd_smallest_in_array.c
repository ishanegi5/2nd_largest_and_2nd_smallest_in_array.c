#include<stdio.h>
int main()
{ int arr2[8],arr1[]={1,2,3,4,5,6,7,8};
   int i,j,min,max,temp;
   for(i=0;i<8;i++)
   {
       arr2[i]=arr1[i];
   }
   printf("second smallest number in array: ");
   for(i=0;i<8-1;i++)
   {
      min=i;
      for(j=i+1;j<8;j++)
      {
        if(arr1[min]>arr1[j])
        {
            min=j;
        }
      }
      
          temp=arr1[min];
        arr1[min]=arr1[i];
        arr1[i]=temp;
        if(i==1)
        {
            printf("%d",arr1[i]);
        }
      
        
   }
   printf("\nsecond largest number in array is: ");
   for(i=0;i<8-1;i++)
   {
      max=i;
      for(j=i+1;j<8;j++)
      {
        if(arr1[max]<arr2[j])
        {
            max=j;
        }
      }
      
        temp=arr2[max];
        arr2[max]=arr2[i];
        arr2[i]=temp;
        if(i==1)
        {
            printf("%d",arr2[i]);
        }
      
        
   }
   printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
