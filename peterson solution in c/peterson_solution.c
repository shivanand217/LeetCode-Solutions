#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int flag[2];

int turn;

const int MAX = 5000;

int ans=0;

void lock_init()
{
	flag[0] = flag[1] = 0;
	
	turn=0;
}

void lock(int self)
{
	flag[self] = 1;
	turn = 1 - self;
	
	// if other is taking lock or it is not currents turn
	while(flag[1-self] == 1 && turn != self);
}

void unlock(int self)
{

	flag[self] = 0;
}


// threading function

void *func(void *s)
{
	int i = 0;

	int self = (int *)s;

	lock(self);
	
	printf("thread entered: %d\n", self);

	lock(self);

	// critical section	
	for(i=0; i<MAX; i++)
		ans++;

	unlock(self);		
}

int main()
{
	pthread_t p1, p2;

	lock_init();
	
	pthread_create(&p1, NULL, func, (void*)0);
	pthread_create(&p2, NULL, func, (void*)0);		

	pthread_join(p1, NULL);
	pthread_join(p2, NULL);

	printf("%d \n", ans);
	
	return 0;
}
