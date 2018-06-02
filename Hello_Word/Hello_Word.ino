//inserisco la libreria per
//gestire i display a matrice di punti
#include <LiquidCrystal.h>

//creo un oggetto specificando i pin RS il pin E e
//i 4-bit di dati (bit 4, 5, 6, 7)
//collegati rispettivamente ai pin 6, 7, 4, 3, 2
//di arduino come da schema
LiquidCrystal Display20x4(12, 11, 5, 4, 3, 2);

void setup()
{
Display20x4.begin(20, 4);

//pulisci il display e posiziona il cursore sulla prima
//riga e sulla prima colonna
Display20x4.clear();

//visualizza il cursore sul display
//per verificare la posizione iniziale
Display20x4.cursor();

//attendi 2 secondi
delay(2000);

//disattivo il cursore
Display20x4.noCursor();

}

void loop()
{
//posiziono il cursore all’inizio della prima riga
Display20x4.setCursor(0,0);
//scrivi nella prima riga un testo
Display20x4.print("HACKABILITY");

Display20x4.setCursor(0,1);
//scrivi nella seconda riga un testo
Display20x4.print("AT");

Display20x4.setCursor(0,2);
//scrivi nella terza riga un testo
Display20x4.print("POLITO");

}
