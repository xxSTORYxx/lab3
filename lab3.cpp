#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main (){
	const size_t vecSiz = 9;
	unsigned int total;
	vector < unsigned int, vecSiz > cow;
	ifstream inFile( "file.in", ios::in );
	if( !inFile ){
		cerr << "failed" << endl;
		exit(1);
	}
	file.in >> cow[0] >> endl;
	for ( size_t i = 1; i < vecSiz; ++i ){
		file.in >> cow[i] >> endl;
	}
	sort(cow.begin(), cow.end());
	for ( size_t j = 1; j < 6; ++j ){
		total += cow[j];
	}
	cout << total << endl;	
	return 0;
}

