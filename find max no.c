#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	int d;
	
	printf("enter the first value :");
	scanf("%d",&a);
	
	printf("enter the second value :");
	scanf("%d",&b);
	
	printf("enter the third value :");
	scanf("%d",&c);
	
	printf("enter the fourth value :");
	scanf("%d",&d);
	
	if(a>b){
	    if(a>c){
	         if(a>d){
	         	printf("a is max");
			 } 
			 else{
			 	printf("d is max");
			 }	
		}
		else{
		     printf("c is max");	
		}	
	}
	else{
		if(b>c){
			if(b>d){
				printf("b is max");
			}
			else{
				printf("d is max");
			}
		}
		else{
			printf("c is max");
		}
	}
	
}
