// Example007

# include <iostream>
# include "support.cpp"

using namespace std;
int count;
extern void write_extern();

int main(int argc, char const *argv[])
{
	/* code */ 

	system("clear");

	count = 5;
	write_extern();

	return 0;
}


