#pragma once
#include <SFML/Graphics.hpp>

class Rectangle
{
private:
  sf::RectangleShape *rectangleShape{};

public:
  Rectangle(int w, int h, int x, int y, sf::Color color);
  ~Rectangle();
  sf::RectangleShape *GetShape() const;
};

class Rectangle2
{
private:
  sf::RectangleShape *rectangleshape2{};

public:
  Rectangle2(int w, int h, int x, int y, sf::Color color);
  ~Rectangle2();
  sf::RectangleShape *GetShape2() const;
};

class LeftEye
{
private:
  sf::RectangleShape *lefteye{};

public:
  LeftEye(int w, int h, int x, int y, sf::Color color);
  ~LeftEye();
  sf::RectangleShape *GetLeftEye() const;
};

class RightEye
{
private:
  sf::RectangleShape *righteye{};

public:
  RightEye(int w, int h, int x, int y, sf::Color color);
  ~RightEye();
  sf::RectangleShape *GetRightEye() const;
};

class MouthLeft
{
private:
  sf::RectangleShape *mouthleft{};

public:
  MouthLeft(int w, int h, int x, int y, sf::Color color);
  ~MouthLeft();
  sf::RectangleShape *GetMouthLeft() const;
};

class MouthRight
{
private:
  sf::RectangleShape *mouthright{};

public:
  MouthRight(int w, int h, int x, int y, sf::Color color);
  ~MouthRight();
  sf::RectangleShape *GetMouthRight() const;
};

class Body
{
private:
  sf::RectangleShape *body{};

public:
  Body(int w, int h, int x, int y, sf::Color color);
  ~Body();
  sf::RectangleShape *GetBody() const;
};

class LeftLeg
{
private:
  sf::RectangleShape *leftleg{};

public:
  LeftLeg(int w, int h, int x, int y, sf::Color color);
  ~LeftLeg();
  sf::RectangleShape *GetLeftLeg() const;
};

class RightLeg
{
private:
  sf::RectangleShape *rightleg{};

public:
  RightLeg(int w, int h, int x, int y, sf::Color color);
  ~RightLeg();
  sf::RectangleShape *GetRightLeg() const;
};

class Detail1
{
private:
  sf::RectangleShape *detail1{};

public:
  Detail1(int w, int h, int x, int y, sf::Color color);
  ~Detail1();
  sf::RectangleShape *GetDetail1() const;
};

class Detail2
{
private:
  sf::RectangleShape *detail2{};

public:
  Detail2(int w, int h, int x, int y, sf::Color color);
  ~Detail2();
  sf::RectangleShape *GetDetail2() const;
};

class Detail3
{
private:
  sf::RectangleShape *detail3{};

public:
  Detail3(int w, int h, int x, int y, sf::Color color);
  ~Detail3();
  sf::RectangleShape *GetDetail3() const;
};

class Detail4
{
private:
  sf::RectangleShape *detail4{};

public:
  Detail4(int w, int h, int x, int y, sf::Color color);
  ~Detail4();
  sf::RectangleShape *GetDetail4() const;
};

class Detail5
{
private:
  sf::RectangleShape *detail5{};

public:
  Detail5(int w, int h, int x, int y, sf::Color color);
  ~Detail5();
  sf::RectangleShape *GetDetail5() const;
};

class Detail6
{
private:
  sf::RectangleShape *detail6{};

public:
  Detail6(int w, int h, int x, int y, sf::Color color);
  ~Detail6();
  sf::RectangleShape *GetDetail6() const;
};