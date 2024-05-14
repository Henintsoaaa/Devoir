#ifndef POINT_H
#define POINT_H

class Point{
	public:		
		// Point();										
		Point(float abs=0, float ord=0);
		~Point();
		void display();
		void setX(float newAbs);
		void setY(float newOrd);
		//float getX();
		//float getY();
	protected:
		float x, y;
};
#endif
