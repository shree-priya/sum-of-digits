#include <stdio.h>
#include <math.h>
int add(int n);

int main(){
  int n;
  printf("ENTER A NUMBER TO SUM:");
  scanf("%d",&n);
  printf("%d",add(n));
  return 0;
}
int add(int n){
    if(n==0){
        return 0;
    }
    else{
      return ((n%10)+add(n/10));
    }

}
