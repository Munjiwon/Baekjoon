#include <stdio.h>
//Baekjoon 4673

int self_num(){
  int i,result=0, num[10001]={0};
  
  for (i=1;i<=10000;i++){
    if (i<10){
    result=i+i;
    num[result]=1;
    }
    else if (i<100) {
      result=i+i/10+i%10;
      num[result]=1;
    }
    else if (i<1000){
      result=i+i/100+(i%100)/10+i%10;
      num[result]=1;
    }
    else{
      result=i+i/1000+(i%1000)/100+(i%100)/10+i%10;
      if(result<=10000){num[result]=1;}
    }
  }
  for(int j=1;j<=10000;j++){
    if(num[j]!=1){
      printf("%d\n",j);
    }
  }
  return 0;
}
int main() {
	self_num();
  return 0;
}
