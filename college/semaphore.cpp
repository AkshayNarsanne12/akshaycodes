#include<bits/stdc++.h>
using namespace std;

struct semaphore {
	enum value(0, 1);

	// q contains all Process Control Blocks (PCBs)
	// corresponding to processes got blocked
	// while performing down operation.
	Queue<process> q;

} P(semaphore s)
{
	if (s.value == 1) {
		s.value = 0;
	}
	else {
		// add the process to the waiting queue
		q.push(P)
		sleep();
	}
}
V(Semaphore s)
{
	if (s.q is empty) {
		s.value = 1;
	}
	else {

		// select a process from waiting queue
		Process p=q.front();
		// remove the process from wating as it has been sent for CS
		q.pop();
		wakeup(p);
		
	
	}
}

int main()
{
    struct semaphore;
    return 0;
}
