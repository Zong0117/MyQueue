#include <iostream>
#include "MyQueue.h"
using namespace std;

int main()
{
	Queue q(10);
	q.EnQueue(1);
	q.EnQueue(2);
	q.EnQueue(3);
	q.EnQueue(4);
	q.print();
	q.DeQueue();
	q.print();


}