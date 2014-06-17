#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	try {
		cout << v.at(4) << endl;
	}
	catch (out_of_range) {
		cout << "catch exception \"out_of_range\"" << endl;
	}

	return 0;
}