#include<stdio.h>
#include<stdlib.h>
int main(){
    int m1,m2,c1,c2,i,j,n,k=0;
    scanf("%d",&n);
    int * arr=(int *)malloc(n*sizeof(int));
    for(int i;i<n;i++){
        scanf("%d",arr+i);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c1++;
            }
        }
    }
   
}