/*
    CH08-320143
    a4p2
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/




#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand_draw()
{

	return rand() % 49 + 1;

}
int main()
{

    srand(time(0));
	set<int> rand_nums;


	for(int i=0; i<6; ++i)//only six
		rand_nums.insert(rand_draw());


	for(set<int>::iterator it=rand_nums.begin(); it!=rand_nums.end(); ++it)
		cout << *it << " ";


	cout << endl;
	return 0;
}
