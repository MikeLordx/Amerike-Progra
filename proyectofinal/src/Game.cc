#include "CommonHeaders.hh"
#include "Player.hh"
#include "TileGroup.hh"
#include "Enemy.hh"


sf::CircleShape* circle{new sf::CircleShape()};

TextObject* textObj1{new TextObject(ASSETS_FONT_ARCADECLASSIC, 14, sf::Color::White, sf::Text::Bold)};

sf::Clock* gameClock{new sf::Clock()};
float deltaTime{};
Player* player1{};
Enemy* enemy{};
Enemy* enemy1{};
Enemy* enemy2{};
Enemy* enemy3{};
GameObject* chest1{};
GameObject* chest2{};
GameObject* chest3{};
GameObject* chest4{};
GameObject* chest5{};
GameObject* chest6{};
GameObject* wall{};
GameObject* wall2{};
GameObject* wall3{};
GameObject* wall4{};
GameObject* wall5{};
GameObject* wall6{};
GameObject* wall7{};
GameObject* wall8{};
GameObject* wall9{};
GameObject* wall10{};
GameObject* wall11{};
GameObject* wall12{};
GameObject* wall13{};
GameObject* wall14{};
GameObject* wall15{};
GameObject* wall16{};
GameObject* iWall{};
GameObject* iWall2{};
GameObject* iWall3{};
GameObject* iWall4{};
GameObject* iWall5{};
GameObject* iWall6{};
GameObject* iWall7{};
GameObject* iWall8{};
GameObject* iWall9{};
GameObject* iWall10{};
GameObject* iWall11{};
GameObject* iWall12{};
GameObject* iWall13{};
GameObject* iWall14{};
GameObject* iWall15{};
GameObject* iWall16{};
GameObject* iWall17{};


TileGroup* tileGroup{};
Tile* tile1{};

uint32 flags{};
    //flags += b2Draw::e_aabbBit;
    //flags += b2Draw::e_shapeBit;
    //flags += b2Draw::e_centerOfMassBit;
    //flags += b2Draw::e_pairBit;
    //flags += b2Draw::e_jointBit;

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
  gravity = new b2Vec2(0.f, 0.f);
  world = new b2World(*gravity);
  drawPhysics = new DrawPhysics(window);
  gameObjects = new std::vector<GameObject*>();
  gameObjectsDeleteList = new std::vector<GameObject*>();

  player1 = new Player(ASSETS_SPRITES, 2.f, 16, 16, 0, 5, 500, 300, 200.f, b2BodyType::b2_dynamicBody, world, window);
  player1->SetTagName("Player");
  enemy = new Enemy(ASSETS_SPRITES, 2.f, 16, 16, 0, 3, 500, 450, 100.f, b2BodyType::b2_dynamicBody, world, window, 2.f, sf::Vector2f (2,0));
  enemy->SetTagName("enemy");
  enemy1 = new Enemy(ASSETS_SPRITES, 2.f, 16, 16, 0, 3, 500, 220, 100.f, b2BodyType::b2_dynamicBody, world, window, 2.f, sf::Vector2f (2,0));
  enemy1->SetTagName("enemy");
  enemy2 = new Enemy(ASSETS_SPRITES, 2.f, 16, 16, 0, 3, 50, 200, 100.f, b2BodyType::b2_dynamicBody, world, window, 2.f, sf::Vector2f (1,0));
  enemy2->SetTagName("enemy");
  enemy3 = new Enemy(ASSETS_SPRITES, 2.f, 16, 16, 0, 3, 50, 450, 100.f, b2BodyType::b2_dynamicBody, world, window, 2.f, sf::Vector2f (1,0));
  enemy3->SetTagName("enemy"); 
  chest1 = new GameObject(ASSETS_SPRITES, 2.f, 16, 16, 6, 1, 300, 500, b2BodyType::b2_staticBody, world, window);
  chest1->SetTagName("chest");
  chest2 = new GameObject(ASSETS_SPRITES, 2.f, 16, 16, 6, 1, 450, 500, b2BodyType::b2_staticBody, world, window);
  chest2->SetTagName("chest");
  chest3 = new GameObject(ASSETS_SPRITES, 2.f, 16, 16, 6, 1, 450, 300, b2BodyType::b2_staticBody, world, window);
  chest3->SetTagName("chest");
  chest4 = new GameObject(ASSETS_SPRITES, 2.f, 16, 16, 6, 1, 200, 300, b2BodyType::b2_staticBody, world, window);
  chest4->SetTagName("chest");
  chest5 = new GameObject(ASSETS_SPRITES, 2.f, 16, 16, 6, 1, 200, 150, b2BodyType::b2_staticBody, world, window);
  chest5->SetTagName("chest");
  chest6 = new GameObject(ASSETS_SPRITES, 2.f, 16, 16, 6, 1, 500, 150, b2BodyType::b2_staticBody, world, window);
  chest6->SetTagName("chest");
  wall = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 50, 50, b2BodyType::b2_staticBody, world, window);
  wall->SetTagName("wall");
  wall2 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 175, 50, b2BodyType::b2_staticBody, world, window);
  wall2->SetTagName("wall");
  wall3 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 300, 50, b2BodyType::b2_staticBody, world, window);
  wall3->SetTagName("wall");
  wall4 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 425, 50, b2BodyType::b2_staticBody, world, window);
  wall4->SetTagName("wall");
  wall5 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 550, 50, b2BodyType::b2_staticBody, world, window);
  wall5->SetTagName("wall");
  wall6 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 675, 50, b2BodyType::b2_staticBody, world, window);
  wall6->SetTagName("wall");
  wall7 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 800, 50, b2BodyType::b2_staticBody, world, window);
  wall7->SetTagName("wall");
  wall8 = new GameObject(ASSETS_TILES, 4.f, 8, 200, 0, 0, 1, 450, b2BodyType::b2_staticBody, world, window);
  wall8->SetTagName("wall");
  wall9 = new GameObject(ASSETS_TILES, 4.f, 8, 200, 0, 0, 750, 450, b2BodyType::b2_staticBody, world, window);
  wall9->SetTagName("wall");
  wall10 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 50, 700, b2BodyType::b2_staticBody, world, window);
  wall10->SetTagName("wall");
  wall11 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 175, 700, b2BodyType::b2_staticBody, world, window);
  wall11->SetTagName("wall");
  wall12 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 300, 700, b2BodyType::b2_staticBody, world, window);
  wall12->SetTagName("wall");
  wall13 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 425, 700, b2BodyType::b2_staticBody, world, window);
  wall13->SetTagName("wall");
  wall14 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 550, 700, b2BodyType::b2_staticBody, world, window);
  wall14->SetTagName("wall");
  wall15 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 675, 700, b2BodyType::b2_staticBody, world, window);
  wall15->SetTagName("wall");
  wall16 = new GameObject(ASSETS_TILES, 4.f, 32, 32, 0, 0, 800, 700, b2BodyType::b2_staticBody, world, window);
  wall16->SetTagName("wall");
  iWall = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 100, 250, b2BodyType::b2_staticBody, world, window);
  iWall->SetTagName("wall");
  iWall2 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 162, 250, b2BodyType::b2_staticBody, world, window);
  iWall2->SetTagName("wall"); 
  iWall3 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 224, 250, b2BodyType::b2_staticBody, world, window);
  iWall3->SetTagName("wall"); 
  iWall4 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 260, 400, b2BodyType::b2_staticBody, world, window);
  iWall4->SetTagName("wall"); 
  iWall5 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 322, 400, b2BodyType::b2_staticBody, world, window);
  iWall5->SetTagName("wall"); 
  iWall6 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 384, 400, b2BodyType::b2_staticBody, world, window);
  iWall6->SetTagName("wall"); 
  iWall7 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 446, 400, b2BodyType::b2_staticBody, world, window);
  iWall7->SetTagName("wall"); 
  iWall8 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 508, 400, b2BodyType::b2_staticBody, world, window);
  iWall8->SetTagName("wall");
  iWall9 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 520, 250, b2BodyType::b2_staticBody, world, window);
  iWall9->SetTagName("wall"); 
  iWall10 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 582, 250, b2BodyType::b2_staticBody, world, window);
  iWall10->SetTagName("wall"); 
  iWall11 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 644, 250, b2BodyType::b2_staticBody, world, window);
  iWall11->SetTagName("wall"); 
  iWall12 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 100, 500, b2BodyType::b2_staticBody, world, window);
  iWall12->SetTagName("wall");
  iWall13 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 162, 500, b2BodyType::b2_staticBody, world, window);
  iWall13->SetTagName("wall"); 
  iWall14 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 224, 500, b2BodyType::b2_staticBody, world, window);
  iWall14->SetTagName("wall"); 
  iWall15 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 520, 500, b2BodyType::b2_staticBody, world, window);
  iWall15->SetTagName("wall"); 
  iWall16 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 582, 500, b2BodyType::b2_staticBody, world, window);
  iWall16->SetTagName("wall"); 
  iWall17 = new GameObject(ASSETS_TILES, 2.f, 32, 32, 0, 0, 644, 500, b2BodyType::b2_staticBody, world, window);
  iWall17->SetTagName("wall"); 
  tileGroup = new TileGroup(window, 12, 12, ASSETS_MAPS, 4.f, 16, 16, ASSETS_TILES);

  contactEventManager = new ContactEventManager(gameObjects, gameObjectsDeleteList);
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
  AddGameObject(enemy);
  AddGameObject(enemy1);
  AddGameObject(enemy2);
  AddGameObject(enemy3);
  AddGameObject(chest1);
  AddGameObject(chest2);
  AddGameObject(chest3);
  AddGameObject(chest4);
  AddGameObject(chest5);
  AddGameObject(chest6);
  AddGameObject(wall);
  AddGameObject(wall2);
  AddGameObject(wall3);
  AddGameObject(wall4);
  AddGameObject(wall5);
  AddGameObject(wall6);
  AddGameObject(wall7);
  AddGameObject(wall10);
  AddGameObject(wall11);
  AddGameObject(wall12);
  AddGameObject(wall13);
  AddGameObject(wall14);
  AddGameObject(wall15);
  AddGameObject(wall16);
  AddGameObject(iWall);
  AddGameObject(iWall2);
  AddGameObject(iWall3);
  AddGameObject(iWall4);
  AddGameObject(iWall5);
  AddGameObject(iWall6);
  AddGameObject(iWall7);
  AddGameObject(iWall8);
  AddGameObject(iWall9);
  AddGameObject(iWall10);
  AddGameObject(iWall11);
  AddGameObject(iWall12);
  AddGameObject(iWall13);
  AddGameObject(iWall14);
  AddGameObject(iWall15);
  AddGameObject(iWall16);
  AddGameObject(iWall17);
  

  textObj1->SetTextStr("Hello game engine");

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

  //lightIdle->Play(deltaTime);

  /*if(std::abs(InputSystem::Axis().x) > 0 || std::abs(InputSystem::Axis().y) > 0)
  {
    runAnimation->Play(deltaTime);
  }
  else
  {
    idleAnimation->Play(deltaTime);
  }*/
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

  for(auto &gameObject : *gameObjects)
  {
    gameObject->Draw();
  }

  window->draw(*textObj1->GetText());
  //world->DebugDraw();
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

void Game::AddGameObject(GameObject* gameObject)
{
  gameObjects->push_back(gameObject);
}