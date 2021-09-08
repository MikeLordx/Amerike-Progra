#include "Rectangle.hh"

Rectangle::Rectangle(int w, int h, int x, int y, sf::Color color)
{
  rectangleShape = new sf::RectangleShape(sf::Vector2f(w, h));
  rectangleShape->setPosition(sf::Vector2f(x, y));
  rectangleShape->setFillColor(color);
}

Rectangle::~Rectangle()
{
}

sf::RectangleShape *Rectangle::GetShape() const
{
  return rectangleShape;
}

Rectangle2::Rectangle2(int w, int h, int x, int y, sf::Color color)
{
  rectangleshape2 = new sf::RectangleShape(sf::Vector2f(w, h));
  rectangleshape2->setPosition(sf::Vector2f(x, y));
  rectangleshape2->setFillColor(color);
}

Rectangle2::~Rectangle2()
{
}

sf::RectangleShape *Rectangle2::GetShape2() const
{
  return rectangleshape2;
}

LeftEye::LeftEye(int w, int h, int x, int y, sf::Color color)
{
  lefteye = new sf::RectangleShape(sf::Vector2f(w, h));
  lefteye->setPosition(sf::Vector2f(x, y));
  lefteye->setFillColor(color);
}

LeftEye::~LeftEye()
{
}

sf::RectangleShape *LeftEye::GetLeftEye() const
{
  return lefteye;
}

RightEye::RightEye(int w, int h, int x, int y, sf::Color color)
{
  righteye = new sf::RectangleShape(sf::Vector2f(w, h));
  righteye->setPosition(sf::Vector2f(x, y));
  righteye->setFillColor(color);
}

RightEye::~RightEye()
{
}

sf::RectangleShape *RightEye::GetRightEye() const
{
  return righteye;
}

Body::Body(int w, int h, int x, int y, sf::Color color)
{
  body = new sf::RectangleShape(sf::Vector2f(w, h));
  body->setPosition(sf::Vector2f(x, y));
  body->setFillColor(color);
}

Body::~Body()
{
}

sf::RectangleShape *Body::GetBody() const
{
  return body;
}

LeftLeg::LeftLeg(int w, int h, int x, int y, sf::Color color)
{
  leftleg = new sf::RectangleShape(sf::Vector2f(w, h));
  leftleg->setPosition(sf::Vector2f(x, y));
  leftleg->setFillColor(color);
}

LeftLeg::~LeftLeg()
{
}

sf::RectangleShape *LeftLeg::GetLeftLeg() const
{
  return leftleg;
}

RightLeg::RightLeg(int w, int h, int x, int y, sf::Color color)
{
  rightleg = new sf::RectangleShape(sf::Vector2f(w, h));
  rightleg->setPosition(sf::Vector2f(x, y));
  rightleg->setFillColor(color);
}

RightLeg::~RightLeg()
{
}

sf::RectangleShape *RightLeg::GetRightLeg() const
{
  return rightleg;
}