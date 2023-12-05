#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int vidas=5;
	int op, op2, dif, idiom;
	char desA, desB, desC, desD, desE, desBa, desBb, desBc;
		
	do{

		system("cls");
		cout<<"JUEGO DE ESCAPE"<<endl;
		cout<<"Elige una opcion del menu principal:"<<endl;
		cout<<"1.- Jugar \n2.- Instrucciones \n3.- Opciones \n4.- Salir"<<endl;
		cin>> op;
		
		switch(op){
			case 1:{
				system("cls");
				cout<<"¡Comencemos!"<<endl;
				system("pause");
				break;
			}	
			break;
			case 2:{	
				system("cls");
				cout<<"Has despertado en un lugar desconocido y sin ninguna pertenencia..."<<endl;
				cout<<"Puedes observar que hay un contador con 5 corazones los cuales representan las vidas y oportunidades que tienes para fallar al tomar decisiones..."<<endl;
				cout<<"El objetivo es escapar..."<<endl;
				system("pause");
				break;
			}
			case 3:{
				system("cls");
				cout<<"Elige una opcion para continuar:"<<endl;
				cout<<"1.- Dificultad \n2.- Idioma \n3.- Premios \n4.- Controles "<<endl;
				cin>> op2;
					switch(op2){
						system("cls");
						case 1:{
							system("cls");
							cout<<"1.- Facil \n2.- Dificil \n3.- Imposible "<<endl;
							cin>> dif;
							switch(dif){
								case 1:{
									system("cls");
									cout<<"Modo facil"<<endl;
									system("pause");
									break;
								}
								case 2:{
									system("cls");
									cout<<"Modo dificil"<<endl;
									system("pause");
									break;
								}
								case 3:{
									system("cls");
									cout<<"Modo imposible xd"<<endl;
									system("pause");
									break;
								}	
							}
							break;
						}
						break;
						case 2:{
							system("cls");
							cout<<"1.- Español \n2.- Ingles \n3.- Portugues"<<endl;
							system("pause");
							cin>> idiom;
							switch(idiom){
								case 1:{
								system("cls");
								cout<<"Configurado en español"<<endl;
								system("pause");
								break;
							}
								case 2:{
								system("cls");
								cout<<"Configured in English(obvio no solo es ejemplo)xd"<<endl;
								system("pause");
								break;
							}
								case 3:{
								system("cls");
								cout<<"Configurado em português(obvio no solo es un ejemplo)"<<endl;
								system("pause");	
								break;
								}
							}
							break;								
						}
						case 3:{
							system("cls");
							cout<<"No hay premios por aqui aun.."<<endl;
							system("pause");
							break;
						}
						case 4:{
							system("cls");
							cout<<"Solo usa las teclas que se te piden y piola :3"<<endl;
							system("pause");
							break;
						}
					}
					break;
				}
				break;
			case 4:{
				system("cls");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;
				cout<<"Chauuu :3"<<endl;
				return 0;
				system("pause");
				break;
			}
			break;
			default:{
					system("cls");
					cout<<"Error elige una de las opciones que se muetran"<<endl;
					system("pause");
					break;
				}		
			}
		}while(op!=1);
		system("cls");
		system("cls");		
		cout<<"Iniciando el juego..."<<endl;
		cout<<"Elige las respuestas que te parezcan correctas"<<endl;
		system("pause");
		system("cls");
		cout<<"Has despertado en una casa desconocida sin ninguna pertenencia contigo \nNi celular ni dinero, absolutamente nada..."<<endl;
		system("pause");
		do{	
		system("cls");
		cout<<"¿Que haras?..."<< vidas <<" vidas restantes "<<endl;
		cout<<"a) Pedir ayuda \nb) Revisar que no haya nadie en la casa \nc) Intentar salir \nd) Despertar(opcion para salir del juego)"<<endl;
		cin>> desA;	
		switch(desA){
	 	while(desA!='a', 'b', 'c', 'd'){	
		
			case 'a':{
				system("cls");
				cout<<"Has perdido una vida  \n¡Mal! Esta mal pedir ayuda si desconoces quienes estan en ese lugar, ¿y si tienen la intencion de lastimarte?..."<<endl;
				system("pause");
				cout<<"Alguien se esta acercando hacia a ti..."<<endl;
				system("pause");			
				break;			
			}
			case 'b':{
				system("cls");
				cout<<"No has perdido ninguna vida \n¡Bien! Lo correcto es analizar tu alrededor porque al final no sabes a que o quienes te enfrentas..."<<endl;
				system("pause");
				cout<<"Al estar visualizando notas que hay una persona cerca de donde estas, no parece amigable..."<<endl;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Es impudente intentar salir sin saber que hay afuera o si hay alguna trampa cerca e gual si siquiera hay una salida..."<<endl;
				system("pause");
				cout<<"Al intentar salir te das cuenta que todas las salidas estan cerradas y descuidadamente generas un ruido que provoca la reaccion de las personas que se encuentran en el lugar..."<<endl;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;
				return 0;
				system("pause");
				break;
				default:{
					system("cls");
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}
			}
		}
	}
	break;
	system("cls");
	}while(desA!='a', 'b', 'c', 'd');	
	if(desA=='a'){
		system("cls");
		cout<<"¿Que haras?..."<< vidas-1 <<" vidas restantes "<<endl;
		cout<<"a) Esconderte \nb) Correr \nc) Esperar \nd) Despertar(opcion para salir del juego"<<endl;
		cin>> desB;
		vidas=vidas -1;
		switch(desB){
			while(desB!='a', 'b', 'c', 'd'){
			case 'a':{
				system("cls");
				cout<<" No has perdido ninguna vida \n¡Bien! por el momento es mejor esconderte y visualizar tu alrededor, no hace falta actuar imprudentemente."<<endl;
				system("pause");
				cout<<"Mientras estas escondido/a pasa un tipo rondando cerca de donde estas, al parecer tiene algo en su mano, es... ¿UN ARMA?!! "<<endl;
				system("pause");
				break;
			}
			case 'b':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Es peligroso correr por un lugar que no conoces y mas si no hay alguna salida o hay alguien que te pueda ver y atrapar."<<endl;
				system("pause");
				cout<<"Mientras corrias una persona te observo y comenzo a perseguirte. :0"<<endl;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Puede ser una buena opcion si es que no tuvieramos en cuenta \nque nuestra vida corre peligro y esperar le daria la oportunidad a personas con malas intenciones a atacarnos."<<endl;
				system("pause");
				cout<<"Mientras te quedas esperando un tipo de ve desde lejos y se comienza a acercar a ti...(esto pinta mal)."<<endl;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;
				return 0;
				system("pause");
				break;
				default:{
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}
			}
		}
	}
	system("cls");		
	}	
	if(desA=='b'){
		system("cls");
		cout<<"¿Que haras?..."<< vidas <<" vidas restantes "<<endl;
		cout<<"a) Esconderte \nb) Correr \nc) Esperar \nd) Despertar(opcion para salir del juego"<<endl;
		cin>> desB;
		switch(desB){
		while(desB!='a', 'b', 'c', 'd'){
			case 'a':{
				system("cls");
				cout<<" No has perdido ninguna vida \n¡Bien! por el momento es mejor esconderte y visualizar tu alrededor, no hace falta actuar imprudentemente."<<endl;
				system("pause");
				cout<<"Mientras estas escondido/a pasa un tipo rondando cerca de donde estas, al parecer tiene algo en su mano, es... ¿UN ARMA?!! "<<endl;
				system("pause");
				break;
			}
			case 'b':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Es peligroso correr por un lugar que no conoces y mas si no hay alguna salida o hay alguien que te pueda ver y atrapar."<<endl;
				system("pause");
				cout<<"Mientras corrias una persona te observo y comenzo a perseguirte. :0"<<endl;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Puede ser una buena opcion si es que no tuvieramos en cuenta \nque nuestra vida corre peligro y esperar le daria la oportunidad a personas con malas intenciones a atacarnos."<<endl;
				system("pause");
				cout<<"Mientras te quedas esperando un tipo de ve desde lejos y se comienza a acercar a ti...(esto pinta mal)."<<endl;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;

				return 0;
				system("pause");
				break;
				default:{
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}
			}
		}
	}
	system("cls");		
	}
	if(desA=='c'){
		system("cls");
		cout<<"¿Que haras?..."<< vidas-1 <<" vidas restantes "<<endl;
		cout<<"a) Esconderte \nb) Correr \nc) Esperar \nd) Despertar(opcion para salir del juego"<<endl;
		cin>> desB;
		vidas = vidas-1;
		switch(desB){
		while(desB!='a', 'b', 'c', 'd'){
			case 'a':{
				system("cls");
				cout<<" No has perdido ninguna vida \n¡Bien! por el momento es mejor esconderte y visualizar tu alrededor, no hace falta actuar imprudentemente."<<endl;
				system("pause");
				cout<<"Mientras estas escondido/a pasa un tipo rondando cerca de donde estas, al parecer tiene algo en su mano, es... ¿UN ARMA?!! "<<endl;
				system("pause");
				break;
			}
			case 'b':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Es peligroso correr por un lugar que no conoces y mas si no hay alguna salida o hay alguien que te pueda ver y atrapar."<<endl;
				system("pause");
				cout<<"Mientras corrias una persona te observo y comenzo a perseguirte. :0"<<endl;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Puede ser una buena opcion si es que no tuvieramos en cuenta \nque nuestra vida corre peligro y esperar le daria la oportunidad a personas con malas intenciones a atacarnos."<<endl;
				system("pause");
				cout<<"Mientras te quedas esperando un tipo de ve desde lejos y se comienza a acercar a ti...(esto pinta mal)."<<endl;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;

				return 0;
				system("pause");
				break;
				default:{
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}
			}
		}
	}
	system("cls");
	}
	if(desB=='a'){
		system("cls");
		cout<<"¿Que haras?..."<< vidas  <<" vidas restantes "<<endl;
		cout<<"a) Buscar otro escondite \nb) Quedarte alli \nc) Esperar a que se vayan \nd) Despertar(opcion para salir del juego"<<endl;
		cin>> desC;
		switch(desC){
		while(desC!='a', 'b', 'c', 'd'){
			case 'a':{
				system("cls");
				cout<<" Has perdido vida \n¡Mal! Resulta exactamenre lo mismo a lo anterior, ademas estan buscandote cambiarte de lugar no hara que no te atrapen."<<endl;
				system("pause");
				cout<<"Al intentar de cambiarte de escondite una persona que se encuentra en la casa te ha visto...): "<<endl;
				system("pause");
				break;
			}
			case 'b':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Es peligroso quedarte alli y esperar a que te encuentren, hay mas soluciones que esa."<<endl;
				system("pause");
				cout<<"Al quedarte ahi un hombre te ha encontrado mientras recorria el lugar. :0"<<endl;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Es arriesgado esperar a que se vayan, pues puede haber mas de esas personas por alli se cuidadoso/a."<<endl;
				system("pause");
				cout<<"Despues de haber esperado a que se vayan te das cuenta que en la cochera de la casa hay una puerta semiabierta que lleva a la salida..:)."<<endl;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;

				return 0;
				system("pause");
				break;
				default:{
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}
			}
		}
	}
	system("cls");
	}
	if(desB=='b' || 'c'){
		do{
		if(vidas==0){
			cout<<"Te has quedado sin vidas, has muerto..."<<endl;
			system("pause");
			cout<<"El juego a terminado."<<endl;
			system("pause");
			return 0;
		}
		system("cls");
		cout<<"¿Que haras?..."<< vidas-1 <<" vidas restantes "<<endl;
		cout<<"a) Dirigirte a la cocina \nb) Dirigirte a la sala \nc) Dirigirte a la cochera <- ;) \nd) Despertar(opcion para salir del juego"<<endl;
		cin>> desBa;
		vidas = vidas-1;
		switch(desBa){
		while(desBa!='a', 'b', 'c', 'd'){
			case 'a':{
				system("cls");
				cout<<" No es por aqui intenta ir por otro lado."<<endl;
				system("pause");
				cout<<"Es mas abajo...): "<<endl;
				system("pause");
				break;
			}
			case 'b':{
				system("cls");
				cout<<"No es por aqui intenta ir por otro lado."<<endl;
				system("pause");
				cout<<"Es mas abajo. :0"<<endl;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<"Biennn es por aqui hay una puerta semiabierta."<<endl;
				system("pause");
				cout<<"Cuando te das cuenta de que hay una salida ahi escuchas que alguien viene corriendo por detras.:)."<<endl;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;

				return 0;
				system("pause");
				break;
				default:{
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}
			}
		}
	}
	}while(desBa!='c');
	if(desBa=='c'){
		if(vidas==0){
			cout<<"Te has quedado sin vidas, has muerto..."<<endl;
			system("pause");
			cout<<"El juego a terminado."<<endl;
			system("pause");
			return 0;			
		}
		system("cls");
		cout<<"¿Que haras..."<< vidas <<" vidas restantes "<<endl;
		cout<<"a) Correr sin parar a la puerta \nb) Enfrentar al tipo \nc) Esconderte \nd) Desperta(salir del juego) "<<endl;
		cin>> desBb;;
		switch(desBb){
		while(desBb!='a', 'b', 'c', 'd'){
			case 'a':{
				system("cls");
				cout<<"Has perdido una vida \n¡No fue tu culpa! intentaste escapar veamos que es lo que sucede...:("<<endl;
				system("pause");
				cout<<"Te han atrapado..."<<endl;
				system("pause");
				break;
			}
			case 'b':{
				system("cls");
				cout<<"Has perdido una vida \n¡No fue tu culpa! intentaste escapar veamos que es lo que sucede...:("<<endl;
				system("pause");
				cout<<"Te han atrapado..."<<endl;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<"Has perdido una vida \n¡No fue tu culpa! intentaste escapar veamos que es lo que sucede...:("<<endl;
				system("pause");
				cout<<"Te han atrapado..."<<endl;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;

				return 0;
				system("pause");
				break;
				default:{
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}
			}		
		}
	}	
	system("cls");
	}
	if(desBb=='a' || 'b' || 'c'){
		vidas=vidas-1;
		if(vidas==0){
			cout<<"Te has quedado sin vidas, has muerto..."<<endl;
			system("pause");
			cout<<"El juego a terminado."<<endl;
			system("pause");
			return 0;
		}
		system("cls");
		cout<<"¿Que haras?..."<< vidas <<" vidas restantes "<<endl;
		cout<<"a) Forcejear \nb) uy kieto \nc) Darle una patada en su zona sensible \nd) Despertar(opcion para salir del juego"<<endl;
		cin>> desBc;
	
		switch(desBc){
		while(desBc='a', 'b', 'c', 'd'){
			case 'a':{
				system("cls");
				cout<<" HAS LOGRADO EMPUJAR AL HOMBRE Y HAS LOGRADO ESCAPAR DE LA CASA POR LA PUERTA DE LA COCHERA."<<endl;
				system("pause");
				cout<<("FELICIDADES LOGRASTE PASAR EL JUEGO CON VIDA!!!")<<endl;
				system("pause");
				cout<<"Chauuuuu";
				return 0;
				system("pause");
				break;
			}
			case 'b':{
				system("cls");
				cout<<" HAS MUERTO, QUEDARTE QUIETO EN ESTA SITUACION SIGNIFICA LA MUERTE ANTE ALGUIEN CON INTENCIONES HOMICIDAS."<<endl;
				system("pause");
				cout<<"PUEDES VOLVER A INTENTARLO, SUERTE PARA LA PROXIMA..."<<endl;
				system("pause");
				cout<<"Chauuuuu";
				return 0;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<" HAS LOGRADO DARLE EN SU PUNTO DEBIL AL SUJETO Y HAS LOGRADO ESCAPAR DE LA CASA POR LA PUERTA DE LA COCHERA."<<endl;
				system("pause");
				cout<<"FELICIDADES LOGRASTE PASAR EL JUEGO CON VIDA!!!"<<endl;
				system("pause");
				cout<<"Chauuuuu";
				return 0;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;

				return 0;
				system("pause");
				break;
				default:{
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}		
			}
		}
	}																										
	system("cls");
	}
	}
	if(desC=='a' || 'b'){
		if(vidas==0){
			cout<<"Te has quedado sin vidas, has muerto..."<<endl;
			system("pause");
			cout<<"El juego a terminado."<<endl;
			system("pause");
			return 0;			
		}
		system("cls");
		cout<<("¿Que haras?...")<< vidas-1 <<(" vidas restantes ")<<endl;
		cout<<("a) Correr \nb) Enfrentarlo \nc) Uy kieto \nd) Despertar(opcion para salir del juego")<<endl;
		cin>> desD;
		switch(desD){
			while(desD!='a', 'b', 'c', 'd'){
			case 'a':{
				system("cls");
				cout<<(" No has perdido ninguna vida \n¡Bien! Si te han encontrado la mejor opcion es correr para evitar ser lastimado/a.")<<endl;
				system("pause");
				cout<<("Mientras corrias pudiste ver que en la cochera de la casa hay una puerta semiabierta la cual lleva a la salida...): ")<<endl;
				system("pause");
				break;
			}
			case 'b':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Es peligroso enfrentarte ante alguien que no sabes si puede llegar a traer un arma o si tiene la intencion de hacerte daño."<<endl;
				system("pause");
				cout<<"Al momento de enfrentarlo el hombre saca una pistola y te apunta. :0"<<endl;
				system("pause");
				break;
			}
			case 'c':{
				system("cls");
				cout<<"Has perdido una vida \n¡Mal! Quedarte quieto/a cuando te atrapan o estas en peligro por obvias razones no es la opcion correcta..."<<endl;
				system("pause");
				cout<<"El hombre saca su arma y te apunta..:O."<<endl;
				system("pause");
				break;
			}
			case 'd':{
				system("cls");
				cout<<"Has despertado, todo se acabo..."<<endl;
				system("pause");
				cout<<"Has salido del juego vuelve pronto :)"<<endl;

				return 0;
				system("pause");
				break;
				default:{
					cout<<"Error, esa no es una opcion, inicia de nuevo TuT "<<endl;
					system("pause");
					break;
				}
			}
		}
	}
	system("cls");
	}
	return 0;
}
