//08_homework_03_answer.cpp
//right-angle triangle with left-down sides
///using while loop to print left-aligned triangle

///way1
///notice that we initialize the counter right before the while loop...even if they're nested
#include <iostream>
using namespace std;
int main()
{   int i=1;
    while(i<=4)
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
         i++;
    }

}
/*
//way 2
#include<iostream>
using namespace std;

int main() {
	int N;
	char x;
	cin >> N>>x;
	///notice all counters start from 1
	///notice row then row in the two loops
	int row = 1;
	while (row <= N)
	{
		int stars_count = 1;

		while (stars_count <= row)
		{
			cout << x;
			++stars_count;
		}
	cout << "\n";
	row++;
	}

	return 0;
}
*/
