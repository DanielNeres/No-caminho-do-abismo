#include <stdio.h>

int main(){
	

	int N, i, j, m;
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
			printf("estou aqui\n\n");
			if(permutacao[i] == ((diferente[checar - 1]) + 1) || checar == 0){
				printf("estou aqui dentro\n\n");
				diferente[checar] = permutacao[i];
				checar += 1;
			}
		}
	}
	for(i = 0; i < checar; i++){
	   	printf("\n\n %d\n", diferente[i]);
	}
	

	for(i = 0; i < N; i++){
		for(j = 0; j <= checar; j++){
			if(diferente[j] == permutacao[i]){
				break;
			}
		}
		for(j = 0; j <= checar; j++){
			if(permutacao[i] > diferente[j]){
				novovetorcomracoa[i] = diferente[j];
				for (m = j; m < checar; m++){
					diferente[m] = diferente[m + 1];
					checar -= 1;
				}
				break;
			} else if(diferente[0] > permutacao[i]){
				novovetorcomracoa[i] = permutacao[i];
				break;
			}
		}
	}
	if(checar > 0){
		for(i = 0; i < checar; i++){
			novovetorcomracoa[((N - checar) - 1) + i] = diferente[i];
		}
	}
	for(i = 0; i < N; i++){
		printf("\n%d\n", novovetorcomracoa[i]);
	}

	return 0;
}
