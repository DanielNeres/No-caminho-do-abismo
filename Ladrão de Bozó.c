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
			printf("\n P %d e D %d", permutacao[i], diferente[checar]);
			if(permutacao[i] == ((diferente[checar - 1]) + 1) || checar == 0){
				diferente[checar] = permutacao[i];
				checar += 1;
				printf("\nestou aqui\n");
			}
		}
		printf("\n P %d e D %d", permutacao[i], diferente[checar]);
	}
	for(i = 0; i < checar; i++){
	   	printf("\n %d\n", diferente[i]);
	}
	

	for(i = 0; i < N; i++){
		for(j = 0; j <= checar; j++){
			if(diferente[j] == permutacao[i]){
				break;
			}
		}
		for(j = 0; j <= checar; j++){
			if(diferente[j] < permutacao[i]){
				novovetorcomracoa[i] = diferente[j];
				for (m = j; m <= checar; m++){
					diferente[m] = diferente[m + 1];
					checar -= 1;
				}
				break;
			} else if(diferente[0] > permutacao[i]){
				novovetorcomracoa[i] = permutacao[i];
			}
		}
	}
	for(i = 0; i < N; i++){
		printf("%d\n", novovetorcomracoa[i]);
	}

	return 0;
}
