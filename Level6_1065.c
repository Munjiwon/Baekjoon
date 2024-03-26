#include <stdio.h>
//Baekjoon 1065

int han_number(int n){
  int count=0,compare[3];
  for (int i=1;i<=n;i++){
    if(i<100){count++;}
    else{
      int k=i;
      if(i==1000){break;}
      for(int j=0;j<3;j++){
        compare[j]=k%10;
        k/=10;
      }
      if(compare[1]-compare[0]==compare[2]-compare[1]){
        count++;
      }
    }
  }
  printf("%d",count);
  return 0;
}

int main(){
  int n;
  scanf("%d",&n);
  han_number(n);
  return 0;
}
