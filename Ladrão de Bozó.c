#include <stdio.h>

int main(){
	

	int N, i;
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
		if(vetorcomparacoa[i] != permutacao[i]){	
			if(permutacao[i] == diferente[0] + 1 || checar == 0){
				diferente[i] = permutacao[i];
				checar = 1;
				printf("%d\n", diferente[i]);
			}
		}
	}
	
	for(i = 0; i < N; i++){
		printf("%d\n", diferente[i]);
	}
	
	return 0;
}
