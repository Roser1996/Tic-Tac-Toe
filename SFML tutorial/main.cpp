//#include <SFML/Graphics.hpp>
//#define SCREEN_WIDTH 1024
//#define SCREEN_HEIGHT 1024

#include <iostream>
#include "Game.hpp"
#include "DEFINITIONS.hpp"


int main() {
//    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Awesome Game");
//
//    while(window.isOpen()) {
//        sf::Event event;
//
//        while(window.pollEvent(event)) {
//            switch(event.type) {
//                case sf::Event::Closed:
//                    window.close();
//                    break;
//            }
//        }
//
//        window.clear();
//
//        // objects to draw
//
//        window.display();
//    }
    
    Roser::Game(SCREEN_WIDTH, SCREEN_HEIGHT, "SFML Starter");
    
    return EXIT_SUCCESS;
}
