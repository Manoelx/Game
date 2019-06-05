#ifndef AUX_H
#define AUX_H

#include <iostream>
#include <string>

/*
tipo de jogo = 1->P v Pc
tipo de jogo = 2->P v P
*/
using namespace std;
class config_jogo{
    private:
        int n_cores;
        int t_codigo;
        int n_palpites;
        int tipo_de_jogo;
        bool cores_repetidas;
    public:
        //----------------------------------------construtor---------------------------------------------------     
        config_jogo(int q_cores, int codigo, int palpites,int select, bool repetidas): n_cores(q_cores), t_codigo(codigo), n_palpites(palpites),tipo_de_jogo(select), cores_repetidas(repetidas){}
        //------------------------------------------gets-------------------------------------------------------
        int get_Ncores(void){ return n_cores;}
        int get_Tcodigo(void){return t_codigo;}
        int get_palpites(void){return n_palpites;}
        int get_tipo(void){return tipo_de_jogo;}
        bool get_corRep(void){return cores_repetidas;}

        //--------------------------------------Overload do cout-----------------------------------------------
        friend ostream & operator<<(ostream & saida, config_jogo & j){
            saida<<"Número de cores:"<<j.get_Ncores()<<endl;
            saida<<"Tamanho do código:"<<j.get_Tcodigo()<<endl;
            if(j.get_tipo()==1){            
                saida<<"Tipo de Jogo:Player v Player"<<endl;
            }else{
                saida<<"Tipo de Jogo:Player v Computador"<<endl;
            }
            saida<<"Número de palpites:"<<j.get_palpites()<<endl;
            if(j.get_corRep()==true){
                saida<<"Cores Repetidas: Sim"<<endl;
            }else{
                saida<<"Cores Repetidas: Não"<<endl;
            }
            return saida;
        }
};

#endif  
