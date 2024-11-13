#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int ar1[a],ar2[b];
    int ar3[a+b];
    for(int i=0;i<a;i++){
        scanf("%d",&ar1[i]);
        ar3[i]=ar1[i];
    }
    for(int i=0; i<b; i++){
        scanf("%d",&ar2[i]);
        ar3[i+a]=ar2[i];
    }
    for(int i=0;i<a+b; i++){
        printf("%d ",ar3[i]);
    }
    
    return 0;
}