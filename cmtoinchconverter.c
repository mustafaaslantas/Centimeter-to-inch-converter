#include <stdio.h>
int main() {
	float inch;
	float cm;

	while(cm>=0) {

		printf("Enter length:");
		scanf("%f", &cm);
		
			if (cm<0){
			printf("Invalid length.");
		}
			else{		
				inch = cm / (2.54);
				printf("%.2f cm = %.2f inch\n",cm, inch);
		}

	};


	return 0;
}
