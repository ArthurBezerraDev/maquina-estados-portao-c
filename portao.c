#include <stdio.h>
#include <stdlib.h>

#include "portao.h"


void ProcessandoPortao(EstadoPortao * portao, EventoPortao evento){
    
    switch(*portao){
        
        case ABERTO:
            // A porta ja esta aberta
            switch(evento){
                
                case FECHAR:
                    *portao = FECHANDO;
                    return;
            }
            break;
        
        case FECHADO:
            // A porta ja esta FECHADO
            switch(evento){
                
                case ABRIR:
                    *portao = ABRINDO;
                    return;
            }
            break;
        
        case ABRINDO:
            // A porta esta ABRINDO
            switch(evento){
                
                case FIM_ABERTURA:
                    *portao = ABERTO;
                    return;
                    
            }
            break;
        
        case FECHANDO:
            // A porta esta FECHANDO
            switch(evento){
                
                case OBSTACULO:
                    *portao = ABRINDO;
                    return;
                    
                case FIM_FECHAMENTO:
                    *portao = FECHADO;
                    return;
            }
            break;
    }
}

void ExibirEstadoAtual(EstadoPortao * portao){
    
    switch(*portao){
        
        case FECHADO:
            printf("PORTAO FECHADO\n");
            return;
        
        case ABERTO:
            printf("PORTAO ABERTO\n");
            return;
        
        case FECHANDO:
            printf("PORTAO FECHANDO\n");
            return;
        
        case ABRINDO:
            printf("PORTAO ABRINDO\n");
            return;
    }
    
}