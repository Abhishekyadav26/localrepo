#include <stdio.h>
int main(){
    int n;
    printf("hey user enter the integer :");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a = 1;
            break;
        }    
    }
    if(a==1){
        printf("it is a composite number ");   
    }
    else if(a==0){
        ("it is a prime number");
    }
    else{
        printf("this number is composite ");
    }
    printf("hello feature1");
    return 0;
}