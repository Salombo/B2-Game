//
//  main.cpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#include <iostream>
#include "Factory.hpp"
#include "GuerrierFactory.hpp"
#include "VoleurFactory.hpp"
#include "MonstreFactory.hpp"

int main(int argc, const char * argv[]) {
    
    GuerrierFactory* wf = new GuerrierFactory();
    VoleurFactory* vf = new VoleurFactory();
    MonstreFactory* mf = new MonstreFactory();
    
    Personnage* War = wf->create("Guerrier 1");
    Personnage* Voleur = vf->create("Voleur 1");
    Personnage* Monstre = mf->create("Monstre 1");
    
    War->print();
    Voleur->print();
    Monstre->print();
    
    return 0;
}
