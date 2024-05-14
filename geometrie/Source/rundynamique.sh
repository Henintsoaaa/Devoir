g++ -fPIC -c Carre.cpp -o carre.o 
g++ -fPIC -c Cercle.cpp -o cercle.o
g++ -fPIC -c Cube.cpp -o cube.o
g++ -fPIC -c Cylindre.cpp -o cylindre.o
g++ -fPIC -c Point.cpp -o point.o
g++ -fPIC -c Point3D.cpp -o point3D.o
g++ -fPIC -c Rectangle.cpp -o rectangle.o
g++ -fPIC -c Sphere.cpp -o sphere.o
g++ -o ../../bibliothequedynamique/libgeometrie.so -shared *.o
