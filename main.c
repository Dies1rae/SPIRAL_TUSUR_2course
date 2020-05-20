#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int M=0, N=0, j, p=1;
	scanf("%d %d", &M, &N);
	int round=0, kr=0, trig=1, smesh=1;
	int mas[M][N];
	for (int a=0; a<M; a++){
		for (int c=0; c<N; c++){
			mas[a][c] = 0;
		}
	}

	if(M>=N){
		kr = N/2;
	}else if(N>M){
		kr = M/2;
	}


	if (N==1){
		printf("\nN==1\n");
		for (int a=0; a<M; a++){
			mas[a][0] = a+1;
		}
	}else if(M==1){
		printf("\nM==1\n");
		for (int a=0; a<M; a++){
			for (int c=0; c<N; c++){
				mas[a][c] = c+1;
			}
		}
	}else if((N>M)&&(M%2==0)) {
		printf("\nM<N\n");
		while (round!=kr){
			round++;
			for (j=round-1; j<N-round+1; j++){
				mas[round-1][j]=p++;
			}
			for (j=round; j<M-round+1; j++){
				mas[j][N-round]=p++;
			}
			for (j=N-round-1; j>=round-1; j--){
				mas[M-round][j]=p++;
			}
			for (j=M-round-1;j>=round;j--){
				mas[j][round-1]=p++;
			}
		}
	}else if((M>N)&&(N%2==0)) {
		printf("\nN<M\n");
		while (round!=kr){
			round++;
			for (j=round-1; j<N-round+1; j++){
				mas[round-1][j]=p++;
			}
			for (j=round; j<M-round+1; j++){
				mas[j][N-round]=p++;
			}
			for (j=N-round-1; j>=round-1; j--){
				mas[M-round][j]=p++;
			}
			for (j=M-round-1;j>=round;j--){
				mas[j][round-1]=p++;
			}
		}
	}else if((N>M)&&(M%2!=0)) {
		printf("\nM<N\n");
		while (round!=kr){
			round++;
			for (j=round-1; j<N-round+1; j++){
				mas[round-1][j]=p++;
			}
			for (j=round; j<M-round+1; j++){
				mas[j][N-round]=p++;
			}
			for (j=N-round-1; j>=round-1; j--){
				mas[M-round][j]=p++;
			}
			for (j=M-round-1;j>=round;j--){
				mas[j][round-1]=p++;
			}
		}
		if(round == kr){
			for (j=round; j<N-round; j++){
				mas[round][j]=p++;
			}
		}
	}else if((M>N)&&(N%2!=0)) {
		printf("\nN<M\n");
		while (round!=kr){
			round++;
			for (j=round-1; j<N-round+1; j++){
				mas[round-1][j]=p++;
			}
			for (j=round; j<M-round+1; j++){
				mas[j][N-round]=p++;
			}
			for (j=N-round-1; j>=round-1; j--){
				mas[M-round][j]=p++;
			}
			for (j=M-round-1;j>=round;j--){
				mas[j][round-1]=p++;
			}
		}
		if(round == kr){
			for (j=round; j<M-round; j++){
				mas[j][round]=p++;
			}
		}
	}else if((M==N)&&(M%2==0)) {
		printf("\nM==N\n");
		while (round!=kr){
			round++;
			for (j=round-1; j<N-round+1; j++){
				mas[round-1][j]=p++;
			}
			for (j=round; j<M-round+1; j++){
				mas[j][N-round]=p++;
			}
			for (j=N-round-1; j>=round-1; j--){
				mas[M-round][j]=p++;
			}
			for (j=M-round-1;j>=round;j--){
				mas[j][round-1]=p++;
			}
		}
	}else if((M==N)&&(M%2!=0)) {
		printf("\nM==N\n");
		while (round!=kr){
			round++;
			for (j=round-1; j<N-round+1; j++){
				mas[round-1][j]=p++;
			}
			for (j=round; j<M-round+1; j++){
				mas[j][N-round]=p++;
			}
			for (j=N-round-1; j>=round-1; j--){
				mas[M-round][j]=p++;
			}
			for (j=M-round-1;j>=round;j--){
				mas[j][round-1]=p++;
			}
		}
		if(round == kr){
			for (j=round; j<M-round; j++){
				mas[j][round]=p++;
			}
		}
	}



	for (int m=0; m<M; m++){
		for(int n=0; n<N; n++){
			printf("%3d", mas[m][n]);
		}
		printf("\n");
	}
	return 0;
}
