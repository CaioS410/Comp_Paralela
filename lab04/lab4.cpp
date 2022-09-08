#include  <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	int shmid;
	int *m;
	shmid = shmget(ftok("lab04",123),1024,IPC_CREAT|0660);

	m = (int*)shmat(shmid,NULL,0);
	*m = 1;
	
	printf("valor: &d",*m);
	pid = fork();
	
	if (pid == 0)
	{
		*m += 2;
		printf("valor: &d",*m);
		
	}
	else
	{
		wait(NULL);
		*m = *m * 4;
		printf("valor: &d",m);
	}
}
