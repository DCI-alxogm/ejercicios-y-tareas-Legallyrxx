#include <stdio.h>
#include <stdlib.h>
	int main(){
		int n_filas=3, m_cols=3;
		float array_2d[n_filas][m_cols];
		int i=0, j=0;
		
		for (int i=0; i< n_filas; i++) {
			for(int j=0; j< m_cols; j++) {
			array_2d[i][j]=0.0;
		}
	}
			
		for(i<n_filas; i++) {
			for(j< m_cols; j++){
			scanf("%f", &array_2d[i][j]);
		}
	}
		
		for(i<n_filas; i++) {
			for(j< m_cols; j++);{
			printf("%f\t", &array_2d[i][j]);
		}
	}
	return 0;
}
