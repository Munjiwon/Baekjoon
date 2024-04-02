#include <stdio.h>

int main(void) {
  int a[10];
  int input;
  int result=0;
  for(int i=0;i<10;i++){
    scanf("%d",&input);
    a[i]=input%42;
  }
  for(int i=0;i<10;i++){
    int count=0;
    for(int j=i+1;j<10;j++){
      if(a[i]==a[j]){count++;}
    }
    if(count==0){result++;}
  }
  printf("%d",result);
}