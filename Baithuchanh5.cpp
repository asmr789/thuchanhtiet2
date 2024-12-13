#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c=0;
    printf("Moi ban nhap vao so nguyen to: ");
    scanf("%d", &a);
    	for  (b = 2;b <= sqrt(a);b++){
    	if (a % b ==0 ){
    		c=1;
    		break;
    	}
		}
		if (a <= 1) c = 1;
	    if(c == 0 ){
    	printf("So %d la so nguyen to",a);  	
	   }
       else {
	   printf("So %d ko la so nguyen to ",a);
       }
return 0;
}