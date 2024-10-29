#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    double x= b* log(a);
    double y= d* log(c);
    if(x>y){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}