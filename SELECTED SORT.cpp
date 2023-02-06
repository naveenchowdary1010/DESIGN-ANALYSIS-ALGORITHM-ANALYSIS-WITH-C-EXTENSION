#include<stdio.h>
int main()
{ 
  int len,i,j,temp,n,mx,k,l;
  printf("enter the total no of elements need to be stored");
  scanf("%d",&n);
  int arr[n];
  for(k=0;k<n;k++)
  scanf("%d",&arr[k]);
  for(i=0;i<n;i++)
  {
  	mx=i;
  	for(j=i+1;j<n;j++)
    if(arr[mx]>arr[j])
    mx=j;
    temp=arr[mx];
    arr[mx]=arr[j];
    arr[j]=arr[temp];
  }
  for(l=0;l<n;l++)
  printf("%d",arr[l]);
  return 0;
  }