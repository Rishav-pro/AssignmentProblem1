#include <stdio.h>

int main() {
    int a,b,n;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("Enter a number: ");
   scanf("%d",&a);
   printf("Enter a number: ");
   scanf("%d",&b);
   int s=0;
   for(int i=0;i<n;i++){
   if(i%a==0||i%b==0){
      s=s+i;
   }
}
printf("%d",s);
    return 0;
}
