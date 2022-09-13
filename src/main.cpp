#include <iostream>
#include <SDL.h>
#include <SDLpp.h>
#include <SDLppWindow.h>
#include <SDLppRenderer.h>

void CreateSDLScreen();
void TypeValRef();

class A
{
    // Destruction dans l'ordre inverse de la construction

    public:
        A()
        {
            std::cout << "Constructeur A" << std::endl;
        }
        // A(const A&) = delete;

        A(const A&)
        {
            std::cout << "Constructeur A (copie)" << std::endl;
        }
        ~A()
        {
            std::cout << "Destructeur A" << std::endl;
        }
};

class B
{
    // Destruction dans l'ordre inverse de la construction

    public:
        B()
        {
            std::cout << "Constructeur B" << std::endl;
        }
        // A(const A&) = delete;

        B(const B&)
        {
            std::cout << "Constructeur B (copie)" << std::endl;
        }
        ~B()
        {
            std::cout << "Destructeur B" << std::endl;
        }
};

void Foo(A a)
{

}

int main(int argc, char** argv)
{
    CreateSDLScreen();
    // TypeValRef();

    // A a;
    // B b;
    
    // Foo(a);
    
    return 0;
}

void TypeValRef()
{
    // Ref > pointeur

    {
        int a = 42;
        int& b = a;
        int c = 0;

        b = c; // a == 0 / Ref

        // Ref necessite la variable (ne peut pas etre nul)
    }

    {
        int a = 42;
        int b = a;
        int c = 0;

        b = c; // a == 42 / Valeur (Change pas la valeur de a)

        // & => Pointe vers l'adresse de la variable
    }

    {
        int a = 42;
        int* b = &a;
        int c = 0;

        b = &c; // Reattribue adresse de b vers c

        // (type)& == Ref / &(var) == adresse

        // Pointeur / Sert a manipuler l'objet (inexistant ou peut etre affectuer nouvelle adresse)
    }

    // Utile Ref const 
    // Ref const peut capturer variable temps / Ref non const ne peut pas
}

void CreateSDLScreen()
{
    SDLpp sdl;
    
    SDLppWindow window(
        "A4 Engine",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        1280, 720, 0);
    
    SDLppRenderer renderer(&window);

    bool isOpen = true;

    while (isOpen)
    {
        SDL_Event event;

        while (SDLpp::PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                isOpen = false;
        }
        
        renderer.SetDrawColor(127, 0, 0, 255);
        renderer.Clear();
        renderer.Present();
    }
}