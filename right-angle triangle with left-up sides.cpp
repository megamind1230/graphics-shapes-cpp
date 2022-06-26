//08_homework_03_answer.cpp
//right-angle triangle with left-up sides

///using while loop to print left-aligned triangle up-side-down
///way1
#include <iostream>
using namespace std;
int main()
{   int i=4;
    while(i>=1)
    {
        int j=1;
        while(j<=4)
        {
            if(i>=j)
            {
                cout<<"@";
            }
            j++;
        }
        cout<<endl;
         i--;
    }

}
/*
///way2


#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;
	///notice the first counter starts from N and the second from 1
	///notice row then row in the two loops
	int row = N;
	while (row > 0)
	{
		int stars_count = 1;

		while (stars_count <= row)
		{
			cout << '*';
			++stars_count;
		}
	cout << "\n";
	row--;
	}

	return 0;
}

*/

