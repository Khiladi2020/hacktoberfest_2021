#include <stdio.h>


int main()
{
    int n=7,i,j;
    int arr[7]={44,21,13,15,5,6,2};
        
 	for(i=0;i<n;i++){
 		for(j=1;j<n-i;j++){
 			if(arr[j]<arr[j-1]){
 				int temp = arr[j];
 				arr[j] = arr[j-1];
 				arr[j-1] = temp;
			 }
		 }
	 }
 
    for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        
    return 0;

}
