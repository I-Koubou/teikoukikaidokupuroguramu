#include <stdio.h>
#include <unistd.h>
int main(void){
int x;       
te();

for(;;){
	printf("\nIf you want to use it again, enter 1\nEnter 2 to exit\n");
	scanf("%d", &x);
		if (x  == 1){
			te();

		}else{
			return 0;
		}
	}
}

int te(void){

	int a, b, c, i, keta, teikouchi;
	keta = 1;
		
	printf("******\n");
	printf("1:Brown\n");
	printf("2:Red\n");
	printf("3:Orange\n");
	printf("4:yellow\n");
	printf("5:green\n");
	printf("6:Blue\n");
	printf("7:purple\n");
	printf("8:gray\n");
	printf("9:White\n");
	printf("0:black\n");
	printf("******\n");
	printf("Enter the color code of the resistor\n");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	for(i=0; i<c; i++){
		keta = keta*10;
	}
	
	teikouchi = (10*a + b) * keta;
	
	printf("The resistance value is%dƒ¶\n", teikouchi);

}
