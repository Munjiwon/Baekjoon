#include <stdio.h>

int main(void) {
  double a[1000];
  int N,M=0;
  double result=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%lf",&a[i]);
    if(M<a[i]){
      M=a[i];
    }
  }
  for(int i=0;i<N;i++){
    a[i]=a[i]/M*100;
    result+=a[i];
  }
  printf("%0.2lf",result/N);
}
