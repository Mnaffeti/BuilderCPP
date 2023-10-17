#include <iostream>
#include "../Headers/ConcreteBuilder.h";
#include "../Headers/Orchestor.h"
#include "Client.h"

int main() {
    std::cout << "Salem ,welcome to ze builder" << std::endl;
    Orchestor* orchestor= new Orchestor();
    Client*c = new Client() ;
    c->ClientCode(*orchestor) ;
    delete orchestor ;
    delete c ;

    return 0;
}
