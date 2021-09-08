#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle *rectangle{new Rectangle(100, 100, 200, 100, sf::Color::Black)};
Rectangle2 *rectangle2{new Rectangle2(100, 50, 200, 120, sf::Color::Red)};
LeftEye *lefteye{new LeftEye(20, 20, 220, 130, sf::Color::White)};
RightEye *righteye{new RightEye(20, 20, 260, 130, sf::Color::White)};
Body *body{new Body(50, 150, 225, 200, sf::Color::Black)};
LeftLeg *leftleg{new LeftLeg(30, 80, 200, 320, sf::Color::Black)};
RightLeg *rightleg{new RightLeg(30, 80, 270, 320, sf::Color::Black)};

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
}

Game::~Game()
{
}

//Starting things
void Game::Start()
{
}

void Game::Initialize()
{
  Start();
  MainLoop();
}

//Logic, animations, etc
void Game::Update()
{
}

void Game::MainLoop()
{
  while (window->isOpen())
  {
    while (window->pollEvent(*event))
    {
      if (event->type == sf::Event::Closed)
      {
        window->close();
      }
    }
    Input();
    Update();
    Render();
  }
  Destroy();
}

void Game::Render()
{
  window->clear(sf::Color::White);
  Draw();
  window->display();
}

//Drawing sprites or geometry.
void Game::Draw()
{
  window->draw(*rectangle->GetShape());
  window->draw(*rectangle2->GetShape2());
  window->draw(*lefteye->GetLeftEye());
  window->draw(*righteye->GetRightEye());
  window->draw(*body->GetBody());
  window->draw(*leftleg->GetLeftLeg());
  window->draw(*rightleg->GetRightLeg());
}

//Keyboard, joysticks, etc.
void Game::Input()
{
}

void Game::Destroy()
{
  delete window;
  delete event;
}