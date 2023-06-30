#include <stdio.h>

int main(){
	int a=0, b=0, den=1, i=0, mdc=0, mmc=0, limMDC=0, limMMC=0;

	scanf("%d %d", &a, &b);		// 15 10


	//Acha limites da busca
	if (a < b){ 
		limMDC = a;
		limMMC = b;
	} else {
		limMDC = b;
		limMMC = a;		//limMMC = 15, limMDC = 10
	}
	
	//MDC
	for(den=limMDC; den >= 1; den--){   	//den = 10
		if(!(a%den) && !(b%den)){ 
			mdc = den;
			break;
		}
	}
	
	//MMC
	i = limMMC;			//i = 15
	while(1){
		if(!(i%a) && !(i%b)) {    
			mmc = i;
			break;
		}
		i++;                      
	}

	printf("%d %d", mdc, mmc);

	return 0;
}
