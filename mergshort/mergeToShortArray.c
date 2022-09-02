#include<stdio.h>
#include<stdlib.h>
void create_sorted_array(int* arr,int n){
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
}
void display(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",*(arr+i));
    }
}
void mergesort(int *arr,int *arr1,int  n,int m){
    int i=0,j=0;
    while(i<n&&j<m){
        if(arr[i]<arr1[j]){
            printf("%d\t",arr[i]);
            i++;
        }
        else{
            printf("%d\t",arr1[j]);
            j++;
        }
    }
    while(i<n){
        printf("%d\t",arr[i]);
        i++;
    }
    while(j<m){
        printf("%d\t",arr1[j]);
        j++;
    }
    printf("\n");
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int *array_1=(int *)malloc(n*sizeof(int));
    int *array_2=(int *)malloc(m*sizeof(int));
    create_sorted_array(array_1,n);
    display(array_1,n);
    create_sorted_array(array_2,m);
    display(array_2,m);
    mergesort(array_1,array_2,n,m);
}
