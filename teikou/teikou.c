#include <stdio.h>
#include <unistd.h>
int main(void){
int x;       
te();

for(;;){
	printf("\nまた使う場合は1と入力して下さい\n終了する場合は2と入力して下さい\n");
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
	printf("1:茶\n");
	printf("2:赤\n");
	printf("3:橙\n");
	printf("4:黄\n");
	printf("5:緑\n");
	printf("6:青\n");
	printf("7:紫\n");
	printf("8:灰\n");
	printf("9:白\n");
	printf("0:黒\n");
	printf("******\n");
	printf("抵抗器のカラーコードを入力\n");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	for(i=0; i<c; i++){
		keta = keta*10;
	}
	
	teikouchi = (10*a + b) * keta;
	
	printf("抵抗値は%dΩ\n", teikouchi);

}
