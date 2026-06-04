#include<stdio.h>
int main(){
    int m;
    printf("Enter no of rows of matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter no of column of matrix:");
    scanf("%d",&n);
    int a[m][n];
    printf("\nEnter the elements of matrix:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
  
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    printf("\nspiral order :\n");
    while(count<tne){
        for(int j=minc;j<=maxc;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr;i--){
        printf("%d ",a[i][minc]);
        count++;    
        }
        minc++;
    
    }
}
