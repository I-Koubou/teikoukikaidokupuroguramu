#include <stdio.h>
#include <unistd.h>
int main(void){
int x;       
te();

for(;;){
	printf("\n�܂��g���ꍇ��1�Ɠ��͂��ĉ�����\n�I������ꍇ��2�Ɠ��͂��ĉ�����\n");
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
	printf("1:��\n");
	printf("2:��\n");
	printf("3:��\n");
	printf("4:��\n");
	printf("5:��\n");
	printf("6:��\n");
	printf("7:��\n");
	printf("8:�D\n");
	printf("9:��\n");
	printf("0:��\n");
	printf("******\n");
	printf("��R��̃J���[�R�[�h�����\n");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	for(i=0; i<c; i++){
		keta = keta*10;
	}
	
	teikouchi = (10*a + b) * keta;
	
	printf("��R�l��%d��\n", teikouchi);

}
