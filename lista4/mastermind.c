// ZADANIE2 LISTA4 Dawid Lipiak


#include <stdio.h>
#include <assert.h>

int main(){

	int red,white,redtest,whitetest;
	int pos1,pos2,pos3,pos4;
	int pozostale=1296;
	int mozliwosci[6][6][6][6];
	
	// UZUPELNIENIE WARTOSCI TABLICY
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			for(int k=0; k<6; k++){
				for(int l=0; l<6; l++){
					mozliwosci[i][j][k][l]=1;
				}
			}
		}
	}
	
	// PIERWSZA PROPOZYCJA ODGADYWANEGO KODU
	pos1=pos2=pos3=pos4=1;
	
	// GLOWNA PETLA GENERUJACA PROPOZYCJE KODU
	for(int i=1; i<=8; i++){
	
		// GENEROWANIE KOLEJNEJ NIE ZEROWEJ POZYCJI KODU
		while(mozliwosci[pos1-1][pos2-1][pos3-1][pos4-1]==0 && pozostale>0){
			if(pos4<6) pos4++;
			else if(pos4==6){
				pos4=1;
				if(pos3<6) pos3++;
				else if(pos3==6){
					pos3=1;
					if(pos2<6) pos2++;
					else if(pos2==6){
						pos2=1;
						if(pos1<6) pos1++;
						else if(pos1==6){
							pos1=1;
							pos2=1;
							pos3=1;
							pos4=1;
						}
					}
				}
			}
		}
		
		// BLOK IF WYKRYWA OSZUSTWO WPROWADZAJACEGO DANE
		if(pozostale<=0){
			printf("You are cheating!\n");
			return 0;
		}
		
		// PRZYPISANIE ZMIENNYM ICH WARTOSCI
		printf("[%d][%d][%d][%d] ?\n", pos1, pos2, pos3, pos4);
		printf("red: ");
		scanf("%d", &red);
		assert(red>=0 && red<=4);
		printf("white: ");
		scanf("%d", &white);
		assert(white>=0 && white<=4);
		
		// BLOK IF OGLASZA ZWYCIESTWO
		if(red==4){
			printf("I win\n");
			return 0;
		}
		
		// ODRZUCENIE NIEPOPRAWNEJ PROPOZYCJI KODU
		mozliwosci[pos1-1][pos2-1][pos3-1][pos4-1]=0;
		pozostale--;
		
		// ZEROWANIE POZYCJI W TABLICY KTORE MOZNA NA PEWNO ODRZUCIC
		for(int i=0; i<6; i++){
			for(int j=0; j<6; j++){
				for(int k=0; k<6; k++){
					for(int l=0; l<6; l++){
						redtest=0;
						whitetest=0;
						if(i+1==pos1) redtest++;
						if(j+1==pos2) redtest++;
						if(k+1==pos3) redtest++;
						if(l+1==pos4) redtest++;
						if(redtest!=red && mozliwosci[i][j][k][l]==1){
							mozliwosci[i][j][k][l]=0;
							pozostale--;
						}
						else if(redtest==red && mozliwosci[i][j][k][l]==1){
							if(i+1 != pos1 && (i+1 == pos2 || i+1 == pos3 || i+1 == pos4)) whitetest++;
							if(j+1 != pos2 && (j+1 == pos3 || j+1 == pos4 || j+1 == pos1)) whitetest++;
							if(k+1 != pos3 && (k+1 == pos4 || k+1 == pos1 || k+1 == pos2)) whitetest++;
							if(l+1 != pos4 && (l+1 == pos1 || l+1 == pos2 || l+1 == pos3)) whitetest++;
							if(whitetest!=white && mozliwosci[i][j][k][l]==1){
							 	mozliwosci[i][j][k][l]=0;
								pozostale--;
							}
						}
					}
				}
			}
		}
	}
return 0;
}

