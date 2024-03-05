#include <iostream>
using namespace std;

class Point
{
private :
	int x, y;
public :
	void viewPoint() const
	{
		cout << '[' << x << ", " << y << ']' << endl;
	}
	Point(int ax = 0, int ay = 0) : x(ax), y(ay)
	{ }
	friend Point operator+(const Point& pos1, const Point& pos2);
};

Point operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.x + pos2.x, pos2.y + pos2.y);
	return pos;
}

int main()
{
	Point a(10, 20);
	Point b(30, 40);

	a.viewPoint();
	b.viewPoint();

	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	c.viewPoint();
	d.viewPoint();
	e.viewPoint();

	// cout << c << endl;
	// cout << d << endl;
	// cout << e << endl;
	
}