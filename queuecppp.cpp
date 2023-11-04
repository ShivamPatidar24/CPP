// C++ program to iterate a STL Queue 
// using standard std : : front and
// std : : pop method
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	// creating std :: queue in c++
	queue<int> q;

	// inserting elements in queue
	// using std :: push method
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	cout << "Elements of queue are : \n";
	while (!q.empty()) {
	
		// getting front element of queue
		cout << q.front() << " ";
	
		// removing front element of queue
		q.pop();
	}

	return 0;
}

