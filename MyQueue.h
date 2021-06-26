#pragma once
class Queue
{
public:
	Queue(int space) : 
		arr(new int(space)),
		space(space),
		front(-1), 
		rear(-1), 
		size(0) {}
	void EnQueue(int);
	void DeQueue();
	int Front();
	bool IsFull();
	bool IsEmpty();
	int sz() { return size; }
	void print();
private:
	int* arr;
	int space;
	int size;
	int front;
	int rear;
};

void Queue::EnQueue(int num)
{
	if (IsFull())
		throw("full");
	arr[rear++] = num;
	rear = (++rear) % space;
	++size;
}
void Queue::DeQueue()
{
	if (IsEmpty())
		throw("empty");
	++front;
	--size;	
}
int Queue::Front()
{
	return arr[front];
}
bool Queue::IsEmpty()
{
	return size == 0;
}
bool Queue::IsFull()
{
	return size == space;
}
void Queue::print()
{
	for (int i = front; i <= rear; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
