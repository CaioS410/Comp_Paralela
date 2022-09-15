#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int thread_count;
int m;
int n;
double* A;
double* x;
double* y;

void *Pth_mat_vect(void* rank);


int main(int argc, char *argv[])
{
	long thread;
	pthread_t* thread_handles;
	
	thread_count = strtol(argv[1],NULL,10);
	thread_handles = malloc(thread_count*sizeof(pthread_t));
	
	printf("Digite as dimensões: ");
	scanf("%d%d", &m, &n);

	x = malloc(n*sizeof(double));
	y = malloc(m*sizeof(double));
	A = malloc(m*n*sizeof(double));
	
	int i,j;
	for (i = 0; i < m; i++)
		for(j = 0; j < n;j++){
			printf("matriz[%d][%d]",i,j);
			scanf("%d", &A[i*n+j]);
		}
		
	printf("Vetor: ");
   for (i = 0; i < n; i++) 
      scanf("%f", &x[i]);
	
	for (thread = 0; thread < thread_count; thread++){
		pthread_create(&thread_handles[thread], NULL, Pth_mat_vect, (void*) thread);
	}
	for (thread = 0; thread < thread_count; thread++){
		pthread_join(thread_handles[thread], NULL);
	}
	
	
	for (i = 0; i < m; i++) {
      printf("[ %d ]",y[i]);
   }
}

void *Pth_mat_vect(void* rank){
	long my_rank = (long) rank;
	int i, j;
	int local_m = m/thread_count;
	int first_row = my_rank*local_m;
	int last_row = (my_rank+1)*local_m - 1;


	for (i = first_row; i <= last_row; i++) {
		y[i] = 0.0;
		for (j = 0; j < n; j++)
			y[i] += A[i*n+j]*x[j];
}
	return NULL;
}

