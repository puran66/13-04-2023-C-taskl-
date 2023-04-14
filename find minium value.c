#include<stdio.h>

 int main(){
 	
 	int a;
 	int b;
 	int c;
 	
 	printf("enter first value :");
 	scanf("%d",&a);
 	
 	printf("enter your second value :");
 	scanf("%d",&b);
 	
 	printf("enter your third value :");
 	scanf("%d",&c);
 	
 	if(a<b){
 		if(a<c){
 			printf("a is minium");
		 }
		 else{
		 	printf("c is minium");
		 }
	 }
 	else{
 		if(b<c){
 			printf("b is minium");
		 }
		 else{
		 	printf("c is minium");
		 }
 		
	 }
 }
