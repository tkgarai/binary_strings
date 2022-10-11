#include <stdio.h>
void printBinary(int a[],int n){
    
    for (int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    
}

void generateBinaryString(int n,int a[],int i){
    
    if (i==n){
        printBinary(a,n);
        return;
    }
    
    a[i]=0;
    generateBinaryString(n,a,i+1);
    a[i]=1;
    generateBinaryString(n,a,i+1);
}

int main()
{
    int n;
    printf("Enter the length: ");
    scanf("%d",&n);
    int a[n];
    
    generateBinaryString(n,a,0);

    return 0;
}
