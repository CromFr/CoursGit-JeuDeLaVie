/*
COURS GIT
Programme à compléter à plusieurs

Thibaut CHARLES
pour le Club Elec ISEN Brest
2013
*/

#include <stdio.h>
#include <stdlib.h>


int grille[20][20];


void RemplirGrille();
void AfficherGrille();
int CompterCellulesAdjascentes(int x, int y);
void AvancerTemps();
int NouvelEtatCellule(int etatCellule, int cellulesVivantesAutour);
void RecopierGrille(int grilleOriginale[20][20], int grilleDestination[20][20]);




/**
	@brief Remplis la grille en y mettant aléatoirement des cellules vivantes ou mortes
**/
void RemplirGrille()
{
	//Parcourir la grille
	// remplir chaque case avec la valeur de rand()%2
	// Ne pas oublier d'appeler srand(time(NULL)); au début de la fonction
	//

	//COMPLETER ICI
}

#define CELL_VIVANTE "\e[42m  \e[0m"
#define CELL_MORTE "\e[40m  \e[0m"
/**
	@brief Affiche la grille dans la console
**/
void AfficherGrille()
{
	//Parcourir la grille
	// Afficher CELL_VIVANTE si la valeur vaut 1
	//          CELL_MORTE sinon
	//
	//Note: Ne pas oublier le \n à la fin de chaque ligne ;)
	//

	//COMPLETER ICI
}

/**
	@brief Compte le nombre de cellules vivantes autour de celle désignée par x et y
	@param x la position de la cellule au centre
	@param y la position de la cellule au centre
	@return le nombre de cellules vivantes, logiquement entre 0 et 8
**/
int CompterCellulesAdjascentes(int x, int y)
{
	//Parcour des 9 cellules autour de la cellule indiquée, en ignorant la cellule centrale
	// Attention à ne pas compter les cellules en dehors de la grille
	//

	//COMPLETER ICI
}



/**
	@brief Met à jour la grille
	@return le nombre de cellules vivantes, logiquement entre 0 et 8
**/
void AvancerTemps()
{
	int nouvelleGrille[20][20];

	//Parcours de grille
	//	Le nouvel état de chaque cellule doit être placé dans nouvelleGrille
	//
	//voir: CompterCellulesAdjascentes, NouvelEtatCellule

	//COMPLETER ICI

	RecopierGrille(nouvelleGrille, grille);
}

/**
	@brief Calcule le nouvel état (morte/vivante) de la cellule en fonction du nombre de cellules vivantes autour.
	@param etatCellule l'état actuel de la cellule
	@param etatCellule Le nombre de cellules vivantes autour
	@return Nouvel état de la cellule : 0 si morte, 1 si vivante
**/
int NouvelEtatCellule(int etatCellule, int cellulesVivantesAutour)
{
    //Une cellule morte possédant exactement trois voisines vivantes devient vivante (elle naît).
    //Une cellule vivante possédant deux ou trois voisines vivantes le reste, sinon elle meurt.
	//

	//COMPLETER ICI
}






/**
	@brief Recopie les données de la grille originale vers la grille de destination
**/
void RecopierGrille(int grilleOriginale[20][20], int grilleDestination[20][20])
{
	int i, j;
	for(i=0 ; i<20 ; i++)
	{
		for(j=0 ; j<20 ; j++)
		{
			grilleDestination[i][j] = grilleOriginale[i][j];
		}
	}
}


int main()
{
   	RemplirGrille();

   	while(1)
	{
		AfficherGrille();
		getchar();
		AvancerTemps();
	}

    return 0;
}















