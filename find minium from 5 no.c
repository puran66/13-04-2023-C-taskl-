#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	
	printf("enter the first value :");
	scanf("%d",&a);
	
	printf("enter the second value :");
	scanf("%d",&b);
	
	printf("enter the third value :");
	scanf("%d",&c);
	
	printf("enter the fourth value :");
	scanf("%d",&d);
	
	printf("enter the fifth value :");
	scanf("%d",&e);
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("a is minium");
				}
				else{
					printf("e is minium");
				}
			}
			else{
				printf("d is minium");
			}
		}
		else{
			printf("c is minium");
		}
	}
	else{
	   if(b<c){
	        if(b<d){
	        	if(b<e){
	        		printf("b is minium");
				}
				else{
					printf("e is minium");
				}
			}
			else{
				printf("d is minium");
			}
	   }	
	   else{
	   	    if(c<d){
	   	    	if(c<e){
	   	    		printf("c is minium");
				   }
				   else{
				   	printf("e is minium");
				   }
			   }
			   else{
			   	   if(d<e){
			   	      	printf("d is minium");
					  }
					  else{
					  	printf("e is minium");
					  }
			   }
	   }
	}
}
