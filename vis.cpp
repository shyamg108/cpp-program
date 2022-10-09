#include<stdio.h>
int main(){
int arr[4]={8,9,10,11};
int i;
for(i=0;i<4;i++)
{
    if(arr[i]%2==0 && arr[i]<=9)
    printf("even %d\n",arr[i]);
    else if (arr[i]%2==1&&arr[i]>=9)
    printf("odd %d\n",arr[i]);

}
return 0;
}