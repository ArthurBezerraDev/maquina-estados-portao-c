
#include <stdio.h>
#include <stdlib.h>

#include "portao.h"



int main(){
    
    EstadoPortao portao = FECHADO;
    
    //ABRIR -> ABRINDO
    ProcessandoPortao(&portao, ABRIR);
    ExibirEstadoAtual(&portao);
    
    //FIM_ABERTURA -> ABERTO
    ProcessandoPortao(&portao, FIM_ABERTURA);
    ExibirEstadoAtual(&portao);
    
    //FECHAR -> FECHANDO
    ProcessandoPortao(&portao, FECHAR);
    ExibirEstadoAtual(&portao);
    
    //OBSTACULO -> ABRINDO
    ProcessandoPortao(&portao, OBSTACULO);
    ExibirEstadoAtual(&portao);
    
    //FIM_ABERTURA -> ABERTO
    ProcessandoPortao(&portao, FIM_ABERTURA);
    ExibirEstadoAtual(&portao);
    
    //FECHAR -> FECHANDO
    ProcessandoPortao(&portao, FECHAR);
    ExibirEstadoAtual(&portao);
    
    
    //FIM_FECHAMENTO -> FECHADO
    ProcessandoPortao(&portao, FIM_FECHAMENTO);
    ExibirEstadoAtual(&portao);

    return 0;
}