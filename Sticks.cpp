#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       int n,area=1;
       scanf("%d",&n);
       int arr[n];
       for(j=0;j<n;j++){
        scanf("%d",&arr[j]);
       }
       int temp;
       for(j=0;j<n-1;j++)
       {
          for(k=j;k<n;k++)
          {
              if(arr[j]<arr[k])
              {
                  temp=arr[j];
                  arr[j]=arr[k];
                  arr[k]=temp;
              }
          }
       }
       int count=0;
       area=1;
       for(j=0;j<n;j++)
       {
           if(arr[j]==arr[j+1])
           {
               count++;
               area*=arr[j];
               j++;
           }
           if(count==2)
            break;
       }
       if(count==2)
        printf("%d\n",area);
       else
        printf("-1\n");
    }
  return 0;
}
