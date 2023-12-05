#include <stdio.h>

int main(){
	

	int N, i, j, m, z = 0;
	scanf("%d", &N);
	int vetorcomparacoa[N];
	int permutacao[N];
	int novovetorcomracoa[N];
	int diferente[N];
	int checar = 0;
	for(i = 1; i <= N; i++){
		vetorcomparacoa[i-1] = i;
	}
	for(i = 0; i < N; i++){
		scanf("%d", &permutacao[i]);
	}
	for(i = 0; i < N; i++){
		if(vetorcomparacoa[i] != permutacao[i] || checar > 0){
			if(permutacao[i] == ((diferente[checar - 1]) + 1) || checar == 0){
				diferente[checar] = permutacao[i];
				checar += 1;
			}
		}
	}
	for(i = 0; i < checar; i++){
	   	printf("\n %d\n", diferente[i]);
	}
	printf("\n\n\n\n");
	
	printf("git hub");
	for(i = 0; i < N; i++){
		for(j = 0; j <= checar; j++){
			if(diferente[j] == permutacao[i]){
				z++;
				break;
			}
		}
		for(j = 0; j < checar; j++){
			if(permutacao[i] > diferente[j]){
				printf("\n\n%d\n\n", (i - z) + j);
				novovetorcomracoa[(i - z) + j] = diferente[j];
				printf("\n\nestou aqui = %d e %d e %d \n\n", novovetorcomracoa[(i - z) + j], diferente[j], permutacao[i]);
				for (m = j; m < checar; m++){
					diferente[m] = diferente[m + 1];
					checar -= 1;
				}
			} else if(diferente[0] > permutacao[i]){
				novovetorcomracoa[i - z] = permutacao[i];
			}
		}
	}
	/*
	if(checar > 0){
		for(i = 0; i < checar; i++){
			novovetorcomracoa[((N - checar)) + i] = diferente[i];
		}
	}
	*/
	for(i = 0; i < N; i++){
		printf("\n%d\n", novovetorcomracoa[i]);
	}

	return 0;
}
