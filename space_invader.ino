

#include <Gamebuino-Meta.h>


const uint16_t SPACE_SHIP[] = {
    // metadata
    9,      // frame width
    9,      // frame height
    1,      // frames
    0,      // frame loop
    0x0000, // transparent color
    0,      // 16-bits color mode

    // colormap
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0xffff, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0xffff, 0x0000,
    0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 0x0000,
    0xffff, 0xffff, 0xffff, 0xffdf, 0xffff, 0xffff, 0xffdf, 0xffff, 0xffff,
    0x0000, 0xffff, 0x0000, 0xffff, 0xffff, 0xffdf, 0x0020, 0xffff, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000
};

const uint16_t INVADER1[] = {
    // metadata
    9,      // frame width
    7,      // frame height
    1,      // frames
    0,      // frame loop
    0x0000, // transparent color
    0,      // 16-bits color mode

    // colormap
    0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 0x0000, 0x0000, 0xffff, 0x0000,
    0x0000, 0xffdf, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000,
    0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000,
    0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000, 0xffff, 0x0000,
    0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0xffff
};

const uint16_t INVADER2[] = {

    // metadata

    9,      // frame width
    7,      // frame height
    1,      // frames
    0,      // frame loop
    0x0000, // transparent color
    0,      // 16-bits color mode

    // colormap

    0x0000, 0x0000, 0x0000, 0xff65, 0xff65, 0xff65, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xff65, 0xff65, 0xff65, 0xff65, 0xff65, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xff65, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0xff65, 0xff65, 0xff65, 0xff65, 0xff65, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xff65, 0xff65, 0xff65, 0xff65, 0xff65, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xff65, 0x0000, 0xff65, 0x0000, 0xff65, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xff65

};

const uint16_t INVADER3[] = {

    // metadata

    9,      // frame width
    7,      // frame height
    1,      // frames
    0,      // frame loop
    0x0000, // transparent color
    0,      // 16-bits color mode

    // colormap

    0x0000, 0x0000, 0x0000, 0xd904, 0xd904, 0xd904, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0xd904, 0xd904, 0xd904, 0xd904, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xd904, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0xd904, 0xd904, 0xd904, 0xd904, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0xd904, 0xd904, 0xd904, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xd904, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000

};

Image spaceShip(SPACE_SHIP);
Image invader(INVADER1);
Image invader2(INVADER2);
Image invader3(INVADER3);

class Monster{

  public:
    Monster(){};
    int _vie;
    int _type;
    int _x;
    int _y;
    int _width;
    int _height;
  
};

Monster tabMonster[20];


class Shoot{

  public:
  
    int _x = 2;
    int _y = 5;
    int _type = 0;
    char _text[50];
    Shoot(){};
    
//    Shoot(char* text)
//    {
//       strcpy(_text, text);
//    }

  
};


//Shoot* tableauShoot;
Shoot tableauShootTest[20];




int frequenceShoot = 10;



int widthEcran = 79;
int heightEcran = 63;


int posVaisseaux = 30;
int vitVaisseaux = 0;

boolean rightButton = false;
boolean leftButton = false;

boolean initDone = false;

int deplacementX = 0;
int deplacementY = 0;

boolean toTheRight = true;

int posTabShoot = 0;


void setup() {
  
  gb.begin();

}

void loop() {

  if(!initDone){
    initTab();
    initTabMonster();
    initTabMonsterNiv1();
  }
  
  while(!gb.update());
  gb.display.clear();
 
  ecouteBouton();
  mouvementVaissaux();
  mouvementShoot();
  mouvementMonster();
  testCollision();
  affiche();

}

void mouvementVaissaux(){


  if(rightButton && posVaisseaux < widthEcran-16){
    posVaisseaux++;
  }
  if(leftButton && posVaisseaux > 1){
    posVaisseaux--;
  }

}


void mouvementMonster(){
//
//  if (deplacementX < 3){
//    deplaceMonster(1,0);
//    deplacementX++;
//  }
//
//  if(deplacementX == 2){
//     deplaceMonster(0,1);
//     deplacementX++;
//  }

 
  toTheRight == true ? moveInvaders("right") : moveInvaders("left");
  
    if (deplacementX == 11) {
      toTheRight = false;  
      deplaceMonster(0,1);
      deplacementX = 0;
    } else if (deplacementX == 0) {
      toTheRight = true;  
      deplaceMonster(0,1);
    }
    
  deplacementX++;
  
}

void moveInvaders(String direction) {
  if (direction == "right") {
    deplaceMonster(1,0);
  } else {
    deplaceMonster(1,0);
  }
}


void mouvementShoot(){

//   for(int i=0;i<sizeof(tableauShoot);i++){
//      
//       tableauShoot[i]._posShootY -= 2;
//    }
//    
//  for(int i=0;i<20);i++){
////      if(tableauShootTest[i]._posShootY > -2){
////         tableauShootTest[i]._posShootY -= 2;
////      }
//      
//    }

  for(int i=0;i<20;i++){
    if(tableauShootTest[i]._y > -4){
       tableauShootTest[i]._y -= 2;
    }    
  }
   
    
}

void affiche(){

  // dessine le vaisseaux
  gb.display.setColor(BLUE);
  gb.display.drawImage(posVaisseaux, 54, spaceShip);
  


  // affiche les tirs
   for(int i=0;i<20;i++){
    if (tableauShootTest[i]._type>0){
      gb.display.setColor(RED);
       gb.display.fillRect(tableauShootTest[i]._x,tableauShootTest[i]._y,2,3);
    }
       
  }


  //affiche les monstres
    for(int i=0;i<20;i++){
      if(tabMonster[i]._vie>0){
        if(tabMonster[i]._vie==1){
          gb.display.drawImage(tabMonster[i]._x, tabMonster[i]._y, invader3);
        }
        else if (tabMonster[i]._vie==2){
          gb.display.drawImage(tabMonster[i]._x, tabMonster[i]._y, invader2);
        }
        else{
          gb.display.drawImage(tabMonster[i]._x, tabMonster[i]._y, invader);
        }
       
      }
       
      
    }

  if(initDone){
    gb.display.setColor(BLUE);
    gb.display.println("init tab");
//    gb.display.println(tableauShootTest[0]._posShootX);
//    gb.display.println(tableauShootTest[1]._posShootX);
//    gb.display.println(tableauShootTest[2]._posShootX);
//    gb.display.println(tableauShootTest[3]._posShootX);
//    gb.display.println(tableauShootTest[4]._posShootX);
//    gb.display.println(tableauShootTest[19]._posShootX);
//    gb.display.setColor(RED);
//       gb.display.fillRect(tableauShootTest[0]._posShootX,tableauShootTest[0]._posShootY,2,3);
  }

    gb.display.setColor(BLUE);
    gb.display.println(posTabShoot);
  
  
}



void ecouteBouton(){

  if(gb.buttons.pressed(BUTTON_LEFT)){
    leftButton = true;
  }

   if(gb.buttons.released(BUTTON_LEFT)){
    leftButton = false;
  }

   if(gb.buttons.pressed(BUTTON_RIGHT)){
    rightButton = true;
  }

   if(gb.buttons.released(BUTTON_RIGHT)){
    rightButton = false;
  }




//  if(gb.buttons.pressed(BUTTON_A)){
if(gb.buttons.repeat(BUTTON_A, frequenceShoot)){
    if(posTabShoot>19){
      posTabShoot = 0;
    }


//    Shoot shoot = Shoot("posVaisseaux");
    Shoot shoot = Shoot();
    shoot._x = posVaisseaux + 4;
    shoot._y = 50;
    shoot._type = 1;

    tableauShootTest[posTabShoot] = shoot;

    posTabShoot++;

    
//    Shoot shoot = Shoot("posVaisseaux");
//    shoot._posShootX = posVaisseaux + 4;
//    shoot._posShootY = 50;
//
//    if(tableauShoot ==0){
//       tableauShoot = (Shoot*)malloc(sizeof(Shoot));
//    }
//   
//    tableauShoot = (Shoot*)realloc(tableauShoot,sizeof(tableauShoot)+sizeof(Shoot));
//
//    tableauShoot[sizeof(tableauShoot)-1] = shoot;


  }


  
}



void initTab(){
  
  for(int i=0;i<20;i++){
  
    Shoot shoot = Shoot();
    shoot._x = 0;
    shoot._y = 0;
    tableauShootTest[i] = shoot;
  }
  initDone = true;

   
}


void initTabMonster(){

    int space =5;
    int between = 3;

   for(int i=0;i<20;i++){
    
    Monster monster = Monster();
    monster._x = i*9 + space + i*between;
    monster._y = 7;
    monster._width = 9;
    monster._height = 9;
    monster._vie = 0;
   
    tabMonster[i] = monster;
  }
  
}

void initTabMonsterNiv1(){

    int space =5;
    int between = 3;

   for(int i=0;i<6;i++){
    
    Monster monster = Monster();
    monster._x = i*9 + space + i*between;
    monster._y = 7;
    monster._width = 9;
    monster._height = 9;
    monster._vie = 3;
   
    tabMonster[i] = monster;
  }
  
}






  
void testCollision(){

  for(int i= 0 ;i<20 ;i++){
    Shoot shoot = tableauShootTest[i];
    if(shoot._type > 0){
      
  
        for(int j = 0 ;j<20;j++){
    
 
          Monster monster = tabMonster[j];
    
          if(monster._vie>0 && gb.collide.rectRect(  shoot._x ,  shoot._y , 2,3, monster._x,monster._y,monster._width,monster._height  )){
            monster._vie--;
            shoot._type = 0;
            tabMonster[j] = monster;
            tableauShootTest[i] = shoot;
          }
        }

        
     }
  }


  
}




void deplaceMonster(int vert, int hori){
  
   for(int i =0;i<20 ; i++){

    Monster monster = tabMonster[i];
    if(monster._vie>0){

      monster._x += hori;
      monster._y += vert;
      tabMonster[i] = monster;
    }
  }
  
}













