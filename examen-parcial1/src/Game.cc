#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

//Cabeza
Rectangle *rectangle{new Rectangle(100, 100, 200, 100, sf::Color(22, 163, 22))};
//Ojos y boca
Rectangle2 *rectangle2{new Rectangle2(28, 26, 235, 153, sf::Color::Black)};
LeftEye *lefteye{new LeftEye(25, 27, 210, 130, sf::Color::Black)};
RightEye *righteye{new RightEye(25, 27, 262, 130, sf::Color::Black)};
MouthLeft *mouthleft{new MouthLeft(15, 22, 225, 165, sf::Color::Black)};
MouthRight *mouthright{new MouthRight(15, 22, 255, 165, sf::Color::Black)};
//Cuerpo
Body *body{new Body(80, 150, 211, 200, sf::Color(22, 163, 22))};
LeftLeg *leftleg{new LeftLeg(50, 80, 198, 320, sf::Color(22, 163, 22))};
RightLeg *rightleg{new RightLeg(50, 80, 251, 320, sf::Color(22, 163, 22))};
//Detalles
Detail1 *detail1{new Detail1(10, 10, 200, 120, sf::Color::White)};
Detail2 *detail2{new Detail2(10, 30, 200, 140, sf::Color(167, 167, 167))};
Detail3 *detail3{new Detail3(10, 10, 250, 140, sf::Color(167, 167, 167))};
Detail4 *detail4{new Detail4(10, 50, 280, 210, sf::Color::Green)};
Detail5 *detail5{new Detail5(10, 30, 280, 260, sf::Color(167, 167, 167))};
Detail6 *detail6{new Detail6(10, 10, 250, 260, sf::Color::Black)};

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
  window->clear(sf::Color::Black);
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
  window->draw(*mouthleft->GetMouthLeft());
  window->draw(*mouthright->GetMouthRight());
  window->draw(*detail1->GetDetail1());
  window->draw(*detail2->GetDetail2());
  window->draw(*detail3->GetDetail3());
  window->draw(*detail4->GetDetail4());
  window->draw(*detail5->GetDetail5());
  window->draw(*detail6->GetDetail6());
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