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
		return 0;
		
	}
