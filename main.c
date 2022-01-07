#include <stdio.h>
#include <stdlib.h>

int Max(int a1[],int j1){
  int max=a1[j1-1];
  for(int i=0;i<j1-1;i++){
    if(max<a1[i]){
        max=a1[i];
    }
  }
  return max;
}

int Min(int a1[],int j1){
  int min=a1[j1-1];
  for(int i=0;i<j1-1;i++){
    if(min>a1[i]){
        min=a1[i];
    }
  }
  return min;
}

int main(int argc, char*argv[]) {
  int i,j=0,count;
  int *a;

  a=(int*)malloc(sizeof(int)*(argc-1));

  for(i=0;i<argc;i++){
    int count=0;
    for(int k=1;k<atoi(argv[i]);k++){
      if(atoi(argv[i])%k==0) count++;
    }
    if(count==1) a[j++]=atoi(argv[i]);
  }

  printf("Minimum = %d",Min(a,j));
  printf("\nMaximum = %d\n",Max(a,j));
}