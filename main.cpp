#include "aux.h"

      //config_jogo(int q_cores, int codigo, int palpites,int select, bool repetidas)

int main(void){
    int q_cores, t_cod, q_palpites, type;
    string rep;
    bool c_rep;
   //-------------------------------------------Coleta de dados do tipo de jogo-----------------------------------------------------------
    cout<<"Insira a quantidade de cores desejada(entre 4 e 10):";
    cin>>q_cores;
    if(q_cores<4 || q_cores>10){
        cout<<"Valor inválido"<<endl;
        return 0;
    }

    cout<<"Escolha o tamanho do código(entre 4 e 6):";
    cin>>t_cod;
    if(t_cod<4 || t_cod>6){
        cout<<"Valor inválido";
        return 0;
    }

    cout<<"Escolha a quantidade de palpites(entre 4 e 10):";
    cin>>q_palpites;
    if(q_palpites<4 || q_palpites>10){
       cout<<"Valor inválido"<<endl;
       return 0;
    }

    cout<<"Se você deseja jogar 1x1 digite um, caso queira jogar contra a máquina digite qualquer número:";
    cin>>type;

    cout<<"Deseja cores repetidas, Sim ou Não:";
    cin>>rep;
    if(rep=="Sim")c_rep=true;
    else c_rep=false;
    //-------------------------------------------------------------------------------------------------------------------------------------

    config_jogo game(q_cores,t_cod,q_palpites,type, c_rep);
    if(game.get_tipo()==1){
        tabuleiro_PvP tijolo(...);        
        int i=0;
        int j=0;
        string color="bacate";
        for(i=0;i<game.get_palpites();i++){
            while(color!="pronto"){
                cout<<"Selecione a Posição e a cor desejada respectivamente: "<<endl;
                    for(j=0;j<game.get_Tcod;j++){
                        tijolo.set_posicao(p,color,i);
                
    return 0;
}
