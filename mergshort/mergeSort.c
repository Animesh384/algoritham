#include<stdlib.h>
#include<stdio.h>
void mergeshorttwoarr(int *arr,int  n,int mid,int m){
    int i=n,j=mid+1;
    int f=0;
    int arr1[m-n];
    while(i<=mid&&j<=m){
        if(arr[i]<arr[j]){
            arr1[f++]=arr[i];
            //printf("%d\t",arr[i]);
            i++;
        }
        else{
            arr1[f++]=arr[j];
            //printf("%d\t",arr[j]);
            j++;
        }
    }
    while(i<=mid){
        arr1[f++]=arr[i];
        i++;
    }
    while(j<=m){
        arr1[f++]=arr[j];
        j++;
    }
    f=0;
    while(n<=m){
        arr[n++]=arr1[f++];
    }
}
void mergeshort(int *arr,int l,int m){
if(l==m){
    return ;
}
int mid =l+(m-l)/2;
mergeshort(arr,l,mid);
mergeshort(arr,mid+1,m);
mergeshorttwoarr(arr,l,mid,m);
}

int main(){
    int arr[]={9,7,5,10,3,1,4,2};
    mergeshort(arr,0,7);
    for(int i=0;i<8;i++){
        printf("%d\n",arr[i]);
    }
}
