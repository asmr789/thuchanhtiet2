#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c=0;
    printf("Moi ban nhap vao so nguyen to: ");
    scanf("%d", &a);
    
    if (a > 2){
    	for  (b = 1;b <= sqrt(a);b++){
    	if (a % b ==0 ){
    		c=0;
    		break;
    	}
		}
	    if(c){
    	printf("So %d la so nguyen to",a);  	
	   }
       else {
	   printf("So %d la so nguyen to ",a);
       }
    }
return 0;
}
