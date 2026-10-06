#ifndef PORTAO_H
#define PORTAO_H


typedef enum{
   
    ABERTO,
    FECHADO,
    ABRINDO,
    FECHANDO
    
}EstadoPortao;


typedef enum{
    
    ABRIR,
    FECHAR,
    FIM_ABERTURA,
    FIM_FECHAMENTO,
    OBSTACULO
    
}EventoPortao;


void ProcessandoPortao(EstadoPortao * portao, EventoPortao evento);

void ExibirEstadoAtual(EstadoPortao * portao);

#endif