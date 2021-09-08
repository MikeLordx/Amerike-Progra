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