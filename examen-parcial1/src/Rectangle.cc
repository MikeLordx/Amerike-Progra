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

MouthLeft::MouthLeft(int w, int h, int x, int y, sf::Color color)
{
  mouthleft = new sf::RectangleShape(sf::Vector2f(w, h));
  mouthleft->setPosition(sf::Vector2f(x, y));
  mouthleft->setFillColor(color);
}

MouthLeft::~MouthLeft()
{
}

sf::RectangleShape *MouthLeft::GetMouthLeft() const
{
  return mouthleft;
}

MouthRight::MouthRight(int w, int h, int x, int y, sf::Color color)
{
  mouthright = new sf::RectangleShape(sf::Vector2f(w, h));
  mouthright->setPosition(sf::Vector2f(x, y));
  mouthright->setFillColor(color);
}

MouthRight::~MouthRight()
{
}

sf::RectangleShape *MouthRight::GetMouthRight() const
{
  return mouthright;
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

Detail1::Detail1(int w, int h, int x, int y, sf::Color color)
{
  detail1 = new sf::RectangleShape(sf::Vector2f(w, h));
  detail1->setPosition(sf::Vector2f(x, y));
  detail1->setFillColor(color);
}

Detail1::~Detail1()
{
}

sf::RectangleShape *Detail1::GetDetail1() const
{
  return detail1;
}

Detail2::Detail2(int w, int h, int x, int y, sf::Color color)
{
  detail2 = new sf::RectangleShape(sf::Vector2f(w, h));
  detail2->setPosition(sf::Vector2f(x, y));
  detail2->setFillColor(color);
}

Detail2::~Detail2()
{
}

sf::RectangleShape *Detail2::GetDetail2() const
{
  return detail2;
}

Detail3::Detail3(int w, int h, int x, int y, sf::Color color)
{
  detail3 = new sf::RectangleShape(sf::Vector2f(w, h));
  detail3->setPosition(sf::Vector2f(x, y));
  detail3->setFillColor(color);
}

Detail3::~Detail3()
{
}

sf::RectangleShape *Detail3::GetDetail3() const
{
  return detail3;
}

Detail4::Detail4(int w, int h, int x, int y, sf::Color color)
{
  detail4 = new sf::RectangleShape(sf::Vector2f(w, h));
  detail4->setPosition(sf::Vector2f(x, y));
  detail4->setFillColor(color);
}

Detail4::~Detail4()
{
}

sf::RectangleShape *Detail4::GetDetail4() const
{
  return detail4;
}

Detail5::Detail5(int w, int h, int x, int y, sf::Color color)
{
  detail5 = new sf::RectangleShape(sf::Vector2f(w, h));
  detail5->setPosition(sf::Vector2f(x, y));
  detail5->setFillColor(color);
}

Detail5::~Detail5()
{
}

sf::RectangleShape *Detail5::GetDetail5() const
{
  return detail5;
}

Detail6::Detail6(int w, int h, int x, int y, sf::Color color)
{
  detail6 = new sf::RectangleShape(sf::Vector2f(w, h));
  detail6->setPosition(sf::Vector2f(x, y));
  detail6->setFillColor(color);
}

Detail6::~Detail6()
{
}

sf::RectangleShape *Detail6::GetDetail6() const
{
  return detail6;
}