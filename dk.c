#include <iostream>
#include <cstring>
using namespace std;
struct Node {
	int a, b;
};
Node vect[3][4] = {
	{{1,2},{5,3},{1,4},{1,5}},
	{{1,1},{1,1},{1,1},{1,2}},
	{{1,4},{5,3},{2,2},{3,3}},
};
int getdirect(int dy, int dx) {
	int direct[4][2]{
		1,0,
		-1,0,
		0,1,
		0,-1
	};
	int max = 0;
	int gop = 1;
	
	for (int x = 0; x < 4; x++) {
		int dry = dy + direct[x][0];
		int drx = dx + direct[x][1];
		if (dry < 0 || drx < 0 || dry >= 3 || drx >= 4) continue;
		max += vect[dry][drx].a;
		gop *= vect[dry][drx].b;


	};
	
	return gop + max;




}
int main()
{
	int dy, dx;
	cin >> dy >> dx;
	cout << getdirect(dy, dx);
	
	return 0;
}
