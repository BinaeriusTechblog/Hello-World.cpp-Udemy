/*
Der Befehl "include" teilt dem Debugger mit dass etwas inkludiert werden soll

Bei "iostream" handelt es sich um eine Standardfunktionsbibliothek
*/
#include <iostream>


//Es wird ein Namensraum deklariert um uns die Arbeit zu erleichtern es ist jedoch nicht zwingend erforderlich
using namespace std;

//"int main()" ist unser Funktionskopf, während sich der Funktionsrumpf in geschweiften Klammern befindet
int main()
{
	/* 
	Mit dem Befeh " cout<< " gibt man Text aus, der Text den man ausgeben möchte befindet sich zwischen Gänsefüßchen 

	Mit dem Befehl " <<endl " könnt ihr einen Zeilenumbruch bewirken

	Eine jede Zeile muss mit einem Semikolon beendet werden

	Deutsche Ausgabe
	*/
	cout << "Hallo Deutschland"<<endl;
	/*
	Englische 
	Text
	*/
	cout << "Hello  Germany"<<endl;

	cout << "Hallo Europa" << endl;
	/*
	Englische
	Text
	*/
	cout << "Hello  Europe" << endl;
	
	cout << "Hallo Welt " << endl;
	/*
	Englische
	Text
	*/
	cout << "Hello  World " << endl;

	cout << "Hallo Galaxie" << endl;
	/*
	Englische
	Text
	*/
	cout << "Hello  Galaxy" << endl;

	return 0;

}
