#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector myvec;

	for(int i = 33; i<=37;i++){
		myvec.push_back(i);
	}
	for (int i = 0; i < myvec.size(); i++)
	{
		cout << myvec[i] << " ";
	}
	cout << endl;
	
}