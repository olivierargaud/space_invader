

#include <Gamebuino-Meta.h>
//#include <Shoot.h>

int widthEcran = 79;
int heightEcran = 63;


int posVaisseaux = 30;
int vitVaisseaux = 0;

boolean rightButton = false;
boolean leftButton = false;




class Shoot{

  public:
//    Shoot();
//    Shoot(int posVaisseaux){_posShootX=posVaisseaux;};
    int _posShootX;
    int _posShootY;
//    virtual void f();
  
};


Shoot tableauShoot[20];


void setup() {
  
  gb.begin();

}

void loop() {
  
  while(!gb.update());
  gb.display.clear();
  
  ecouteBouton();
  mouvementVaissaux();
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


void affiche(){

  // dessine le vaisseaux
  gb.display.setColor(BLUE);
  gb.display.fillRect(posVaisseaux, 54, 16, 4);
  
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




  if(gb.buttons.pressed(BUTTON_A)){
    Shoot *shoot;
    shoot = new Shoot();
//    int test  = new Shoot();

    shoot._posShootX -> posVaisseaux;

  }


  
}































