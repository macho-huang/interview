//
// Created by xiemenghui on 2018/7/20.
//

#include <iostream>
#include "SingletonPattern/SingletonMain.h"
#include "AbstractFactoryPattern/FactoryMain.h"
#include "AdapterPattern/AdapterMain.h"
#include "BridgePattern/BridgeMain.h"
#include "ObserverPattern/ObserverMain.h"

int main() {
    std::cout << "*******************" << std::endl;
    std::cout << "** Éè¼ÆÄ£Ê½Àý×Ó **" << std::endl;//乱码
    std::cout << "*******************" << std::endl;

    std::cout << "*******************" << std::endl;
    std::cout << "** µ¥ÀýÄ£Ê½ **" << std::endl;
    std::cout << "*******************" << std::endl;
    SingletonMain();

    std::cout << "*******************" << std::endl;
    std::cout << "** ³éÏó¹¤³§Ä£Ê½ **" << std::endl;
    std::cout << "*******************" << std::endl;
    FactoryMain();
    
    std::cout << "*******************" << std::endl;
    std::cout << "** ÊÊÅäÆ÷Ä£Ê½ **" << std::endl;
    std::cout << "*******************" << std::endl;
    AdapterMain();

    std::cout << "*******************" << std::endl;
    std::cout << "** ÇÅ½ÓÄ£Ê½ **" << std::endl;
    std::cout << "*******************" << std::endl;
    BridgeMain();
    
    std::cout << "*******************" << std::endl;
    std::cout << "** ¹Û²ìÕßÄ£Ê½ **" << std::endl;
    std::cout << "*******************" << std::endl;
    ObserverMain();

    return 0;
}
