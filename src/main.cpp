#include <Arduino.h>
#include "led.h"

Led ledAmarelo(15);
Led ledAmareloB(16);
Led ledAmareloC(17);
Led ledAmareloD(18);


void setup()
{
  ledAmarelo.iniciar();
  ledAmarelo.ativarPiscar(100);

  ledAmareloB.iniciar();
  ledAmareloB.ativarPiscar(200);

  ledAmareloC.iniciar();
  ledAmareloC.ativarPiscar(400);

  ledAmareloD.iniciar();
  ledAmareloD.ativarPiscar(800);
}

void loop()
{
  ledAmarelo.atualizar();
  ledAmareloB.atualizar();
  ledAmareloC.atualizar();
  ledAmareloD.atualizar();
}
