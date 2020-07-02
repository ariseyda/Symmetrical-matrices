#include<stdio.h>

//Write a program that finds whether an entered NxN square matrix is symmetric or not. 
//Matrices whose transposition is equal to it are called symmetrical matrices.

int main(){
	
	int n,m;
	printf("Enter N X M:");
	scanf("%d",&n);
	scanf("%d",&m);
	int matrix[n][m];
	int matrix1[m][n];
	int i,j;
	printf("Enter values of matrix:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Matrix={");
	for(j=0;j<n;j++){
		printf("{");
		for(i=0;i<m;i++){
			printf("%d",matrix[j][i]);
			if(i<m-1){
				printf(",");
			}
		}
		printf("}");
		if(j<n-1){
			printf(",");
		}
	}
	printf("}");
	
	int b=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			matrix1[b][i]=matrix[i][j];
			b++;
		}
		b=0;
	}
	
	printf("\nTranspose={");
	for(j=0;j<m;j++){
		printf("{");
		for(i=0;i<n;i++){
			printf("%d",matrix1[j][i]);
			if(i<n-1){
				printf(",");
			}
		}
		printf("}");
		if(j<m-1){
			printf(",");
		}
	}
	printf("}");
	
	int k,l,count=0;
	for(k=0;k<n;k++){
		for(l=0;l<m;l++){
			if(matrix[k][l]!=matrix1[k][l]){
				count++;
			}
		}
	}
	
	if(count==0){
		printf("\nThis matrix is a symmetric matrix.");
	}
	else{
		printf("\nNot a symmetric matrix.");
	}
	
	return 0;
}
