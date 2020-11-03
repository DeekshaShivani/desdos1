#include<stdio.h>
#include<pthread.h>
void *thread(void *arg)
{
	printf("thread\n");
}
int main(int agrc , char const *argv[])
{
	pthread_t tid;//opaque data tyoe like int i//
	printf("before thread creation\n");
	pthread_create(&tid,NULL,thread, NULL);
	return 0;
}
