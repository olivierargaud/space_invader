

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

const uint16_t INVADER[] = {
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

Image spaceShip(SPACE_SHIP);
Image invader(INVADER);

int widthEcran = 79;
int heightEcran = 63;


int posVaisseaux = 30;
int vitVaisseaux = 0;

int posInvadersX = 5;
int posInvadersY = 0;

boolean toTheRight = true;

boolean rightButton = false;
boolean leftButton = false;

void setup() {
  
  gb.begin();

}

void loop() {
  
  while(!gb.update());
  gb.display.clear();

  mouvementVaissaux();

//  if (toTheRight == true) {
//    moveInvaders("right");
//  } else {
//    moveInvaders("left");
//  }

  toTheRight == true ? moveInvaders("right") : moveInvaders("left");

  if (posInvadersX == 11) {
    toTheRight = false;  
    posInvadersY++;
  } else if (posInvadersX == 0) {
    toTheRight = true;  
    posInvadersY++;
  }
  
  createInvader();
  affiche();

}

void mouvementVaissaux(){


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


  if(rightButton && posVaisseaux < widthEcran-9){
    posVaisseaux++;
  }
  if(leftButton && posVaisseaux > 1){
    posVaisseaux--;
  }

}


void affiche(){

  // dessine le vaisseaux
  gb.display.setColor(BLUE);
  gb.display.drawImage(posVaisseaux, 54, spaceShip);
  
}

void createInvader() {
  for (int i = posInvadersX; i <= posInvadersX + 60; i += 12) {
    gb.display.drawImage(i, posInvadersY, invader);    
  }
}

void moveInvaders(String direction) {
  if (direction == "right") {
    posInvadersX++;
  } else {
    posInvadersX--;
  }
}
