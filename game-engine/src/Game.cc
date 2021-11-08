#include "CommonHeaders.hh"
#include "Player.hh"
#include "Animation.hh"
#include "TileGroup.hh"


sf::CircleShape* circle{new sf::CircleShape()};

TextObject* textObj1{new TextObject(ASSETS_FONT_ARCADECLASSIC, 14, sf::Color::White, sf::Text::Bold)};

sf::Clock* gameClock{new sf::Clock()};
float deltaTime{};
Player* player1{};
GameObject* chest1{};
GameObject* chest2{};
GameObject* chest3{};
GameObject* chest4{};
GameObject* bomb1{};
GameObject* bomb2{};
GameObject* light1{};
GameObject* upperWalls1{};
GameObject* upperWalls2{};
GameObject* upperWalls3{};
GameObject* upperWalls4{};
GameObject* upperWalls5{};
GameObject* upperWalls6{};
GameObject* leftSideWall{};
GameObject* downWall{};
GameObject* rightSideWall{};
Animation* idleAnimation{new Animation()};
Animation* runAnimation{new Animation()};

TileGroup* tileGroup{};
Tile* tile1{};

uint32 flags{};
    //flags += b2Draw::e_aabbBit;
    //flags += b2Draw::e_shapeBit;
    //flags += b2Draw::e_centerOfMassBit;
    //flags += b2Draw::e_pairBit;
    //flags += b2Draw::e_jointBit;

Animation* lightIdle{};

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
  gravity = new b2Vec2(0.f, 0.f);
  world = new b2World(*gravity);
  drawPhysics = new DrawPhysics(window);
  gameObjects = new std::vector<GameObject*>();
  gameObjectsDeleteList = new std::vector<GameObject*>();

  player1 = new Player(ASSETS_SPRITES, 4.f, 16, 16, 0, 5, 500, 300, 200.f, b2BodyType::b2_dynamicBody, world, window);
  player1->SetTagName("Player");
  chest1 = new GameObject(ASSETS_SPRITES, 4.f, 16, 16, 6, 1, 300, 500, b2BodyType::b2_staticBody, world, window);
  chest1->SetTagName("chest");
  chest2 = new GameObject(ASSETS_SPRITES, 4.f, 16, 16, 6, 1, 450, 600, b2BodyType::b2_staticBody, world, window);
  chest2->SetTagName("chest");
  chest3 = new GameObject(ASSETS_SPRITES, 4.f, 16, 16, 6, 1, 200, 400, b2BodyType::b2_staticBody, world, window);
  chest3->SetTagName("chest");
  chest4 = new GameObject(ASSETS_SPRITES, 4.f, 16, 16, 6, 1, 250, 600, b2BodyType::b2_staticBody, world, window);
  chest4->SetTagName("chest");
  bomb1 = new GameObject(ASSETS_SPRITES, 2.f, 16, 16, 5, 0, 200, 400, b2BodyType::b2_staticBody, world, window);
  bomb1->SetTagName("bomb");
  bomb2 = new GameObject(ASSETS_SPRITES, 2.f, 16, 16, 5, 0, 450, 600, b2BodyType::b2_staticBody, world, window);
  bomb2->SetTagName("bomb");
  light1 = new GameObject(ASSETS_SPRITES, 4.f, 16, 16, 6, 3, 90, 120, b2BodyType::b2_staticBody, world, window);
  light1->SetTagName("light");
  upperWalls1 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 125, 30, b2BodyType::b2_staticBody, world, window);
  upperWalls1->SetTagName("wall");
  upperWalls2 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 250, 30, b2BodyType::b2_staticBody, world, window);
  upperWalls2->SetTagName("wall");
  upperWalls3 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 375, 30, b2BodyType::b2_staticBody, world, window);
  upperWalls3->SetTagName("wall");
  upperWalls4 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 500, 30, b2BodyType::b2_staticBody, world, window);
  upperWalls4->SetTagName("wall");
  upperWalls5 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 625, 30, b2BodyType::b2_staticBody, world, window);
  upperWalls5->SetTagName("wall");
  upperWalls6 = new GameObject(ASSETS_TILES, 4.f, 8, 32, 0, 0, 700, 30, b2BodyType::b2_staticBody, world, window);
  upperWalls6->SetTagName("wall");
  leftSideWall = new GameObject(ASSETS_TILES, 4.f, 1, 200, 0, 0, 60, 350, b2BodyType::b2_staticBody, world, window);
  leftSideWall->SetTagName("wall");
  downWall = new GameObject(ASSETS_TILES, 4.f, 180, 1, 0, 0, 400, 700, b2BodyType::b2_staticBody, world, window);
  downWall->SetTagName("wall");
  rightSideWall = new GameObject(ASSETS_TILES, 4.f, 1, 200, 0, 0, 715, 350, b2BodyType::b2_staticBody, world, window);
  rightSideWall->SetTagName("wall");
  tileGroup = new TileGroup(window, 12, 12, ASSETS_MAPS, 4.f, 16, 16, ASSETS_TILES);

  contactEventManager = new ContactEventManager(gameObjects, gameObjectsDeleteList);


  lightIdle = new Animation(light1->GetSprite(), 6, 11, 0.1f, 3);
}

Game::~Game()
{
}

//Starting things
void Game::Start()
{
  flags += b2Draw::e_shapeBit;
  world->SetDebugDraw(drawPhysics);
  drawPhysics->SetFlags(flags);
  world->SetContactListener(contactEventManager);

  AddGameObject(player1);
  AddGameObject(chest1);
  AddGameObject(chest2);
  AddGameObject(chest3);
  AddGameObject(chest4);
  AddGameObject(bomb1);
  AddGameObject(bomb2);
  AddGameObject(light1);
  AddGameObject(upperWalls1);
  AddGameObject(upperWalls2);
  AddGameObject(upperWalls3);
  AddGameObject(upperWalls4);
  AddGameObject(upperWalls5);
  AddGameObject(upperWalls6);

  textObj1->SetTextStr("Buscaminas :D");
  idleAnimation = new Animation(player1->GetSprite(), 0, 5, 0.05f, 5);
  runAnimation = new Animation(player1->GetSprite(), 0, 5, 0.08f, 6);

  /*circle->setRadius(2.f);
  circle->setFillColor(sf::Color::Green);
  circle->setOutlineColor(sf::Color::Green);*/
}

void Game::Initialize()
{
  Start();
  MainLoop();
}

void Game::UpdatePhysics()
{
  world->ClearForces();
  world->Step(deltaTime, 8, 8);
}

//Logic, animations, etc
void Game::Update()
{
  deltaTime = gameClock->getElapsedTime().asSeconds();
  gameClock->restart();

  for(auto &gameObject : *gameObjects)
  {
    gameObject->Update(deltaTime);
  }

  //circle->setPosition(player1->GetSprite()->getPosition());

  lightIdle->Play(deltaTime);

  if(std::abs(InputSystem::Axis().x) > 0 || std::abs(InputSystem::Axis().y) > 0)
  {
    runAnimation->Play(deltaTime);
  }
  else
  {
    idleAnimation->Play(deltaTime);
  }
}

void Game::MainLoop()
{
  while (window->isOpen())
  {
    while(window->pollEvent(*event))
    {
      if(event->type == sf::Event::Closed)
      {
        window->close();
      }
    }

    UpdatePhysics();
    Input();
    Update();
    Render();
  }
  Destroy();
}

void Game::Render()
{
  for(auto& gameobject: *gameObjectsDeleteList)
  {
      gameObjects->erase(std::remove(gameObjects->begin(), gameObjects->end(), gameobject), gameObjects->end());
      delete gameobject;
  }
  gameObjectsDeleteList->clear();

  window->clear(sf::Color::Black);
  Draw();
  window->display();
}

//Drawing sprites or geometry.
void Game::Draw()
{
  //player1->Draw();
  //window->draw(*circle);

  tileGroup->Draw();
  //tile1->Draw();

  for(auto &gameObject : *gameObjects)
  {
    gameObject->Draw();
  }

  window->draw(*textObj1->GetText());
  world->DebugDraw();
}

//Keyboard, joysticks, etc.
void Game::Input()
{
  //player1->Move();
}

void Game::Destroy()
{
  delete window;
  delete event;
}

void Game::AddGameObject(GameObject* gameObject)
{
  gameObjects->push_back(gameObject);
}