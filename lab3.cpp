#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstddef>

using namespace std;
int main (){
	const size_t vecSiz = 9;
	size_t i, j;
	int total = 0;
	vector < unsigned int > cow(vecSiz);

	ifstream inFile( "file.in", ios::in );
	if( !inFile ){
		cerr << "failed" << endl;
		exit(1);
	}
	inFile >> cow.at(0);
	for ( i = 1; i < vecSiz; ++i ){
		inFile >> cow.at(i);
	}
	sort ( cow.begin(), cow.end() );
	for ( j = 4; j < vecSiz; ++j ){
		total += cow.at(j);
	}
	cout << total << endl;	
	return 0;
}

