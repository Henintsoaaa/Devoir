# README pour le Programme d'Activation

Ce programme sert à gérer l'activation d'un utilisateur dans une application. Il effectue une vérification pour déterminer si l'utilisateur est déjà activé et suit également le nombre de tentatives d'activation qui lui restent.

## Bibliotheque h

### En-tête de protection

- `#ifndef __POINT__` : Cette directive vérifie si `__POINT__` n'a pas été défini. Si ce n'est pas le cas, elle définit `__POINT__` et inclut le contenu du fichier. Cela aide à éviter les problèmes de multiples inclusions du même fichier en C++.

### Utilisation du namespace `std`

- `using namespace std;` : Cette ligne permet d'utiliser les noms de la bibliothèque standard sans avoir à les préfixer par `std::`. Cela simplifie l'accès aux types et fonctions de la bibliothèque standard, mais il est recommandé de l'éviter dans les fichiers d'en-tête pour éviter les conflits de noms.

### Inclusion de bibliothèques

- `<iostream>` : Pour l'entrée/sortie standard.
- `<fstream>` : Pour la manipulation de fichiers.
- `<string>` : Pour l'utilisation de la classe `std::string`.

### Classe `Activation`

- **Membres privés** :
  - `string code = "ABCD";` : Le code d'activation attendu.
  - `int point;` : Le nombre de tentatives restantes.
  - `bool status = false;` : L'état d'activation de l'utilisateur.

- **Constructeur `Activation()`** : Le constructeur par défaut initialise `point` à 0 et `status` à `false`.

- **Destructeur `~Activation()`** : Destructeur de la classe.

- **Méthodes publiques** :
  - `int getPoint();` : Renvoie le nombre de tentatives restantes.
  - `bool verifyActivation();` : Vérifie si l'utilisateur est activé en comparant le code d'activation avec celui attendu.
  - `bool getStatus();` : Renvoie l'état d'activation de l'utilisateur.
  - `void activate();` : Active l'utilisateur en modifiant l'état d'activation et en incrémentant le nombre de tentatives restantes.

## Programme cpp

## Prérequis

- Un environnement de développement C++ compatible.
- Le fichier `code.txt` contenant le code d'activation.
- Le fichier `tentative.txt` pour enregistrer le nombre de tentatives restantes.
Ces fichiers sont dans le même repertoire que le programme.

## Installation

1. Le run.sh permet de compiler le programme et le transformer en bibliothèque à l'aide de ces commandes :
g++ -c bibliotheque/Activation.cpp -o bibliotheque/Activation.o
g++ -fPIC -c bibliotheque/Activation.cpp -o bibliotheque/Activation.o
g++ -o libActivation.so -shared bibliotheque/Activation.o
cp libActivation.so ../bibliothequedynamique
g++ main.cpp -L/home/misa2026/MISA/mr_Tahiry/bibliothequedynamique -lActivation -o main.exe
2. Exécutez le programme.

## Utilisation

Le programme commence par créer une instance de `Activation`. Il vérifie ensuite si l'utilisateur est activé en appelant `verifyActivation()`. Si l'utilisateur n'est pas activé, le programme tente de vérifier l'activation en utilisant le code d'activation du fichier `code.txt`.

Si le code d'activation est correct, le programme active l'utilisateur et affiche "Hello world". Si le code est incorrect, le programme décrémente le nombre de tentatives restantes dans le fichier `tentative.txt` et affiche un message indiquant que l'utilisateur doit payer pour une licence.

Si le nombre de tentatives est supérieur à zéro, le programme vérifie à nouveau l'état d'activation. Si l'utilisateur est activé, il affiche "Hello world". Sinon, il affiche "You didn't pay".

Si le nombre de tentatives est égal à zéro, le programme affiche "You didn't pay, Pay a license."



### Conclusion

Ce programme est un exemple simple de gestion d'activation utilisateur. Il peut être étendu pour inclure des fonctionnalités supplémentaires, comme la gestion des erreurs de fichier ou l'intégration avec une base de données pour stocker les informations d'activation.

