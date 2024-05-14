#ifndef CUBE_H
#define CUBE_H

class Cube{
	public:
		Cube(float x=0);
		~Cube();
		float getArrete();
		void setArrete(float newArrete);
		void display();
		void aire();
		void volume();
	protected:
		float arrete;	
};
#endif