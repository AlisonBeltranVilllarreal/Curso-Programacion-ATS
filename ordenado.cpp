//ArrayOrdenado
	
#include <iostream>
#include <stdio.h>
	
using namespace std;
	
#define MAX 20
	
	int V[MAX];
	int N = -1;

	void Mostrar(){
    for (int i=0; i<=N; i++)
    printf(" %i ", V[i]);

    system("pause");
	}
	
	void EliminarOrdenado (int Y){
		
		int I,K;
		I=0;		
		
		while ((I<=0) && (Y!=V[I]))
		I++;
		
		if (I>N){
		cout<<"El valor de X no se encuentra en el arrreglo"<<endl;
		system("pause");
		}
		else {
			for (K=I; K<=N-1; K++)
			V[K]=V[K+1];
			N--;

		}	
	}
	
	
	

	void insertarOrdenado(int Y){
		int POS,i;
		
    if(N<MAX){
    	POS=BuscarOrdenado(Y);
    	if(POS>0){
    		cout<<"El elemento ya existe"<<endl;	
		}
    	else{
    		N=N+1;
    		POS=POS*(-1);
    		for(i=N; I>=(POS+1);i++){
    			V[i]=V[i-1];
			}
			V[POS]=Y;
		}
		else{
			cout<<"No hay espacio en el arreglo"<<endl;
		}
	}
}

	int BuscarOrdenado(int X){
	int i;
	i=0;
	
	while ((i<=N)&&(V[i]<X))
	i++;
	
	if((i>N)||(V[i]>X))
	return POS=(-i);
	else
	return POS=(i);
	}	
	
	void ModificarOrdenado(int X,int Y){
		int I;
		I=0;
		while ((I<=N)&&(X!=V[I]))
		I++;
		
		if(I>N){
			cout<<"	El valor X no se encuentra en el arreglo"<<endl;
			system("Pause");
		}
		else 
		V[I]=Y;
		
	
		
	}
	
	void MenuP(){
		
	int X,Y;
	int i, aux;
	int op;  
    int I,K;
	I=0;	
	
	do{
		
		cout<<"MENU ARREGLO ORDENADO:\n";
		cout<<"1. Insertar Ordenado.\n"<<endl;
		cout<<"2. Eliminar.\n"<<endl;
		cout<<"3. Modificar.\n"<<endl;
		cout<<"4. Mostrar ordenado.\n"<<endl;
		cout<<"5. Buscar ordenado.\n"<<endl;
		cout<<"6. Salir."<<endl;
		cin>>op;
		
		     switch(op){
		     	
			 case 1:
                printf("Escribir el valor a insertar: ");
                scanf("%i", &Y);
                insertarOrdenado(Y);
                
               
 
			   
				I=0;	
                
                	//Acomoda en orden
			    for(N=0;N<=MAX;N++){
			    	
			    	aux=V[N];
			    	
			    	while((N>0)&&(V[N-1]> aux)){
			    		V[N]= V[N-1];
			    		N--;
					}
					V[N]=aux;
					}
					
					//Borrar el vetor con 0				
					
					for(i=0;i<=MAX;i++){ 
					Y=0;
					while ((I<=0) && (Y!=V[I]))
					I++;
					
					if (V[I]==0){
					for (K=I; K<=N-1; K++)
						V[K]=V[K+1];
						N--;
					}
					
            	}
                
                
                break;

            case 2:
                
				printf("Escribir el valor a eliminar: ");
                scanf("%i", &Y);
				
			     EliminarOrdenado(Y);
				
				I=0;	
                
                	//Acomoda en orden
			    for(N=0;N<=MAX;N++){
			    	
			    	aux=V[N];
			    	
			    	while((N>0)&&(V[N-1]> aux)){
			    		V[N]= V[N-1];
			    		N--;
					}
					V[N]=aux;
					}
					
					//Borrar el vetor con 0
				
					
					
					for(i=0;i<=MAX;i++){ 
					Y=0;
					while ((I<=0) && (Y!=V[I]))
					I++;
					
					if (V[I]==0){
					for (K=I; K<=N-1; K++)
						V[K]=V[K+1];
						N--;
					}
					
            	}
				

                break;
			 		
			case 3:
				
				cout<<"Ingrea el valor a modificar:"<<endl;
			    cin>>X;
			    cout<<"Ingrea el valor a agregar:"<<endl;
			    cin>>Y;
				ModificarOrdenado( X,Y);
				
				I=0;	
                
                	//Acomoda en orden
			    for(N=0;N<=MAX;N++){
			    	
			    	aux=V[N];
			    	
			    	while((N>0)&&(V[N-1]> aux)){
			    		V[N]= V[N-1];
			    		N--;
					}
					V[N]=aux;
					}
					
					//Borrar el vetor con 0
				
					
					
					for(i=0;i<=MAX;i++){ 
					Y=0;
					while ((I<=0) && (Y!=V[I]))
					I++;
					
					if (V[I]==0){
					for (K=I; K<=N-1; K++)
						V[K]=V[K+1];
						N--;
					}
					
            	}
				
			     break;
			    
		    case 4:
		    	Mostrar();
		    	
		    	break;
		    	
		    case 5:
		    	printf("Escribir el valor a buscar: ");
                scanf("%i", &X);
				BuscarOrdenado(X);
				
		    	
		}
		}while (op!=6);
		
	}
	
	
		
	int main(){
		
		
	
	MenuP();
		
	Mostrar ();
	system("pause");
	
	
	return 0;
	
	}
