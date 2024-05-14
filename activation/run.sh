g++ -c bibliotheque/Activation.cpp -o bibliotheque/Activation.o
g++ -fPIC -c bibliotheque/Activation.cpp -o bibliotheque/Activation.o
g++ -o libActivation.so -shared bibliotheque/Activation.o
cp libActivation.so ../bibliothequedynamique
g++ main.cpp -L/home/misa2026/MISA/mr_Tahiry/examen/bibliothequedynamique -lActivation -o main.exe