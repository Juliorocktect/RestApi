#include <iostream>
class Rechteck
{
public:
	 Rechteck(int borders, int width, int height);
	~Rechteck();

private:
	int borders, width, height;
public:
	int getHeight() {
		return height;
	}
};

Rechteck::Rechteck(int borders,int width,int height)
{
	this->borders = borders;
	this->width = width;
	this->height = height;
	std::cout << "Constructed";
}

Rechteck::~Rechteck()
{
	free(&borders);
	free(&width);
	free(&height);
	std::cout << "Destructed";
}