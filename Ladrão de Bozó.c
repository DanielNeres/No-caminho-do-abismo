#include <stdio.h>

int main(){
	

	int N, i;
	scanf("%d", &N);
	int vetorcomparacoa[N];
	int permutacao[N];
	for(i = 1; i <= N; i++){
		vetorcomparacoa[i-1] = i;
	}
	for(i = 0; i < N; i++){
		scanf("%d", &permutacao[i]);
	}
	printf("\n");
	for(i = 0; i < N; i++){
		printf("%d", permutacao[i]);
	}
	printf("\n");
	for(i = 0; i < N; i++){
		printf("%d", vetorcomparacoa[i]);
	}
	
	return 0;
}







