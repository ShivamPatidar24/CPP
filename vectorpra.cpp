#include<iostream>
#include<vector>
using namespace std;


int
main ()
{

  vector < int >v = { 11, 4, 5, 6, 2, 44 };

  for (int i = 0; i < v.size (); i++)
    {
      cout << v[i] << " ";
    }
  cout << endl;

  cout << "sort array : ";
  sort (v.begin (), v.end ());
  for (int i = 0; i < v.size (); i++)
    {
      cout << v[i] << " ";
    }
  cout << endl;
  cout << "reverse array : ";

  reverse (v.begin (), v.end ());
  for (int i = 0; i < v.size (); i++)
    {
      cout << v[i] << " ";
    }
  cout << endl;

  cout << v[3];
  cout << endl;

  sort (v.begin (), v.end ());
  for (int i = 0; i < v.size (); i++)
    {
      cout << v[i] << " ";
    }
  v[2] = 45;
  cout << endl;
 for(int i = 0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    
    v.push_back(344);
    cout << endl;
     for(int i = 0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}

