#include <iostream>
using namespace std;


class Bola{
private:
	string cor;
public:
	void set_cor(string color){cor=color;}
	string get_cor(void){return cor;}
};
class jogo_pc{
	private:
		Bola b[9][4];
		string cores[];
	public:
		void set_posi(int linha, int p, string color){
			while(1){				
			if(cor_pertence(color){
				b[linha][p].set_cor(color);
				break;
			}else{ cout<<"ERRO";
			}
		}
		void imprime(void){
			int i, j;
			for(i=0;i<9;i++){
				for(j=0;j<4;j++){					
					cout<<"["<<b[i][j].get_cor()<<"]";
				}
			cout<<endl;
			}
		}
		void cria(void){
			int i, j;
			string c="Buraco";
			for(i=0;i<9;i++){
				for(j=0;j<4;j++){					
					b[i][j].set_cor(c);
				}
			}
		}
int cor_pertence(string c){
	for(int i=0;i<4;i++){
		if(c==cores[i]) return 1;
	}
	return 0;
}
void set_cores(string * v){cores=v;}
};

int main(void){
	jogo_pc jogo;
	jogo.cria();
	jogo.imprime();
	jo.set_cores(
	string c;
	string v[4]={"Vermelho", "Verde", "Azul", "Preto"};
int i=0;
int p;
	while(i<9){	
		while(1){
			cin<<p<<c;	
			jogo.set_pos(i,p,c);
			if(p==-1) break;
		}
		i++;
	}
	return 0;
}	
