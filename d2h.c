/*
  Title: d2h.c
  Author: MotorHead74808
  Date: September 15, 2022
*/

#include <stdio.h>

#define MAX 1000
#define OUT -1

int store[Max]; //storage of proto hex value
char hex[MAX];  //final hex string
char ref[17] = {"0123456789ABCDEF\0"};  //reference array

//math and storage for hex conversion
void hex_conv(int in){
  int a;  //variable to be divided into 16; remainder to be put in array
  int b;  //next number to be divided
  int i, j; //variables to cycle through array
  int tmp[MAX]; //temp array to put variables in correct order

  a=in;
  j=0;
  i=b=-1; //tmp array offset; allow loop to start
  tmp[0]=OUT;
  
  //'Division' until no usable remainders
  while(b!=0){
    for(b=0; a>=16; ++b)
      a=a-16;
    tmp[i]=a;
    ++i;
    a=b
  }
  //transfer data to global array in correct order
  i=i-1;
  while(tmp[i]!=OUT){
    store[j]=tmp[i];
    --i;
    ++j;
  }
  store[j]=OUT;
}

//Translate the integer array to the hex equivalent 
void hex_trans(void){
  int i, j;
  i=0;
  while(store[i]!=OUT){
  j=store[i];
  hex[i]=ref[j];
  ++i;
  }
}

//Get number from user, output a hex translation
int main(){
  int i;
  printf(""Please enter a positive number:\n);
  scanf("%d", &i);
  hex_conv(i);
  hex_trans();
  printf("\nThe hex value is: 0X%s\n", hex);
  retun 0;
}
