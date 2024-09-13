#include<iostream>
#include<sstream>



using namespace std;



int main()
{

	string Time;
	int H;
	int M;

	cin >> Time;
	
	stringstream ss(Time);
	ss >> H;
	ss >> M;
	
	cout << H << M << endl;




		return 0;
}