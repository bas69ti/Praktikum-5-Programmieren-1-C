#include "bintree.h"
#include <ctype.h>
#pragma warning(disable:4996)


//#define AUFGABE1
//#define AUFGABE2
#define AUFGABE3


//Aufgabe 2
void kopiereDatei(const char* dateiname) {

	FILE* quelldatei;

	if (!(quelldatei = fopen(dateiname, "r")))
		fprintf(stderr, "Fehler in Quelldatei!");

	FILE* zieldatei;

	if (!(zieldatei = fopen("ziel.txt", "w")))
		fprintf(stderr, "Fehler in Zieldatei!");

	char c;
	long v;
	while ((v = fgetc(quelldatei)) != EOF) {

		c = (char)v;

		if (c > 96 || c < 123)
			c = tolower(c);

		if(c != ' ')
			fputc(c, zieldatei);
	}

	fclose(quelldatei);
	fclose(zieldatei);

}


int main(int argc, char* argv[]) {

#ifdef AUFGABE1
	//Aufgabe 1
	bintree* baum = newNode('L');

	baum->left = newNode('E');
	baum->right = newNode('O');
	baum->left->left = newNode('H');
	baum->left->right = newNode('L');

	printf("%-30s", "Aufzaehlung der Elemente: ");
	print_inorder(baum);

	printf("\n%-30s","Anzahl der Elemente : ");
	count(baum);

	printf("%d", cnt);

#endif // AUFGABE 1

#ifdef AUFGABE2

	//Erstelle Datei aus der gelesen werden soll
	FILE* datei;

	if (!(datei = fopen("quelle.txt", "w")))
		fprintf(stderr, "Dateifehler!");
	//Beispieltext - Pulp Fiction :D
	fprintf(datei, "Ich habe dieselbe Seife benutzt wie du und als ich fertig war, sah das Handtuch nicht aus wie eine gottverdammte Monatsbinde.");
	fclose(datei);

	const char* dateiname = "quelle.txt";

	kopiereDatei(dateiname);

#endif AUFGABE2

#ifdef AUFGABE3

	int a = 0;
	for (int i = 0; i < argc; i++) {
		if (isdigit(*argv[i]))
			a += (int)(*argv[i] - '0');
	}

	printf("Summe: %d", a);

#endif //AUFGABE3

}
