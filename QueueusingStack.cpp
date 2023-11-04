#include<iostream>
#include<stack>
using namespace std;

class Queue
{
  stack<int> s1;
    stack<int> s2;

public:

  void push (int x)
  {
    s1.push (x);
  }

  int pop ()
  {
    if (s2.empty ())
      {
	if (s1.empty ())

	  {
	    cout << "Queue is empty." << endl;
	    return -1;
	  }
      }


    while (!s1.empty ())
      {
	s2.push (s1.top ());
	s1.pop ();

      }
    int frontvalue = s2.top ();
    s2.pop ();
    return frontvalue;

  }


  bool empty ()
  {

    if (s2.empty ())
      {
	if (s1.empty ())

	  {
	    return true;
	  }
      }
    return false;
  }
};

int
main ()
{
  Queue q;
  q.push (4);
  q.push (24);
  q.push (44);
  q.push (24);
  q.push (49);
  cout << q.pop()<<endl;
  cout << q.pop()<<endl;
  cout << q.pop()<<endl;
  cout << q.pop()<< endl;
  cout << q.pop();
}

