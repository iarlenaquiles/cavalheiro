	#include <iostream>
	
	using namespace std;
	
	int mata_e_entrega_espada(int espada, int vet[], int tamanho){
		espada = (espada + 1) % tamanho;
		
		while(vet[espada] == 0)
			espada = (espada + 1) % tamanho;
		
		vet[espada] = 0;
		
		while(vet[espada] == 0)
			espada = (espada + 1) % tamanho;
			
		return espada;
	}
	int main(){
		
		int qtd;
		cout << "Informe a quantidade de cavalheiros: ";
		cin >> qtd;
		
		
		int *vet = new int[qtd];
		
		for(int i = 0; i < qtd; i++){
			vet[i] = i + 1;
		}
		int escolhido;
		cout << "Informe o escolhido: ";
		cin >> escolhido;
		int vivos = qtd;
		int espada = escolhido;
		
		while( vivos > 1){
			espada = mata_e_entrega_espada(espada,vet,qtd);
			vivos--;
		}
		
		
		cout << "Vencedor: " << espada;
		return 0;
	}
