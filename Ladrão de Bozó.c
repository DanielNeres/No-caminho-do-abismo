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
			if(permutacao[i] == diferente[checar - 1] + 1 || checar == 0){
				diferente[checar] = permutacao[i];
				printf("%d\n", diferente[i]);
				checar += 1;
			}
		}
	}
	
	return 0;
}
