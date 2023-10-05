#include <stdio.h>
main () {
	int giochiamo=0;
	printf("Questo gioco chiedera' all'utente di rispondere a varie domande a risposta multipla\n");
	printf("Vuoi giocare? Inserisci 1 per il si, un altro tasto per il no\n");
	scanf("%d", &giochiamo);
	while (giochiamo==1) {		
		char nomeUtente[20];
		int punteggio, risp1, risp2, risp3;
		punteggio=0;
		printf("inserisci il tuo nome\n");
		scanf("%s", nomeUtente);
		printf("Seleziona il numero corrispondente alla risposta che vuoi dare alle seguenti domande\n");
		printf("Quali di questi animali e' un mammifero? : \n");
		printf("1: Pettirosso\n");
		printf("2: Serpente\n");
		printf("3: Topo\n");
		scanf("%d", &risp1);
		if (risp1==3) {
			punteggio++;
			printf("Risposta esatta! Il tuo punteggio e': %d\n", punteggio);
		}
		else {
			printf("Risposta errata o non valida!\n");
		}
		printf("Seleziona il numero corrispondente alla risposta che vuoi dare alle seguenti domande\n");
		printf("In che anno la nazionale Italiana ha vinto gli ultimi mondiali di calcio?: \n");
		printf("1: 2002\n");
		printf("2: 2006\n");
		printf("3: 2012\n");
		scanf("%d", &risp2);
		if (risp2==2) {
			punteggio++;
			printf("Risposta esatta! Il tuo punteggio e': %d\n", punteggio);
		}
		else {
			printf("Risposta errata o non valida!\n");
		}
		printf("Seleziona il numero corrispondente alla risposta che vuoi dare alle seguenti domande\n");
		printf("Qual e' l'ingrediente principale del pesto alla Genovese?: \n");
		printf("1: basilico\n");
		printf("2: rucola\n");
		printf("3: spinaci\n");
		scanf("%d", &risp3);
		if (risp3==1) {
			punteggio++;
			printf("Risposta esatta! Il tuo punteggio e': %d\n", punteggio);
		}
		else {
			printf("Risposta errata o non valida!\n");
		}
	printf("il gioco e finito! Il punteggio dell'utente %s e': %d\n", nomeUtente, punteggio);
	printf("vuoi giocare ancora? Inserisci 1 se vuoi riprovare, un altro tasto se vuoi che il gioco finisca\n");
	scanf("%d", &giochiamo);
	}	
}
