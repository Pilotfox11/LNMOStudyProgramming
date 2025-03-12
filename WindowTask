#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
    sf::RenderWindow window(sf::VideoMode(1000,1000), "Graphic1.1");
    while(window.isOpen())
    {
        sf:: Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf:: Event:: Closed)
            {
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        window.display();
    }
}
