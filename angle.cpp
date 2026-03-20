#include"angle.h"
angle::angle(){
	this->length=0;
	this->width=0;
}
angle::angle(double length,double width){
	this->length=length;
	this->width=width;
}
double angle::getWidth()const {
return width;
}
double angle::getLength()const {
return length;
}
void angle::setLength (double length) {
this->length=length;
} 
void angle::setWidth (double width) {
this->width=width;
} 
double angle::area()
{
	return length*width;
}
double angle::perimeter()
{
	return 2*(length+width);
}
