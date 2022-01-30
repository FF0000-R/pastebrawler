#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *function( void *ptr )
{
	char *message;
	message = (char *) ptr;
	printf("%s \n", message);
}

int main()
{
	pthread_t thread1, thread2;
	char *message1 = "Thread !";
	char *message2 = "Thread @";
	int iret1, iret2;

	iret1 = pthread_create(&thread1, NULL, function, (void*) message1);
	iret2 = pthread_create(&thread2, NULL, function, (void*) message2);

	exit(0);
}
