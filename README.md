# !!! IMPORTANT !!!

Il est important de me lire TOTALEMENT avant de commencer à tout casser... Merci ! 

# B2_Game

Un super jeu de rôle en devenir...

# Arborescence du projet :
## Game

Contient l'ensemble des fichiers du projet : 

*Chaque '\*' est un répertoire contenant les fichiers qui suivent...*

* Main

```
  definitions.cpp
  definitions.h
```

* Personnage

```
  Personnage.cpp
  Personnage.h(pp)
```

* Actions

```
  Action.cpp
  Action.h(pp)
```

* Competences

```
  Competence.cpp
  Competence.h(pp)
```

* Factory

```
  Factory.cpp
  Factory.h(pp)
  GuerrierFactory.cpp
  GuerrierFactory.h(pp)
  VoleurFactory.cpp
  VoleurFactory.h(pp)
  MonstreFactory.cpp
  MonstreFactory.h(pp)
```

* Combat

```
  Combat.cpp
  Combat.h(pp)
  Combatsimple.cpp
  Combatsimple.h(pp)
```

# Avant d'apporter vos changements :

* Toujours bien commenter, en précisant la date, quels ont été les changements effectués
* Veiller à bien respecter les normes de code du projet (majuscules, accolades, parenthèses...)

Exemple : 
```
FAUX = class Competencevoleur:Competence{...}

VRAI = class CompetenceVoleur:Competence{...}

```
Déclaration d'une fonction : 
```
FAUX = void maFonction{};

VRAI = void maFonction();
```
