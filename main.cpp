#include <iostream>

using namespace std;

int main() {
    int opcao;

    do {
        cout << "\n===== GUIA PARA INICIANTES NO VALORANT =====\n";
        cout << "1 - Funcoes dos Agentes\n";
        cout << "2 - Tipos de Mira\n";
        cout << "3 - Dicas para Iniciantes\n";
        cout << "4 - Glossario (girias)\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "\nDUELISTA: Entra primeiro no bomb.\n";
                cout << "CONTROLADOR: Usa smokes.\n";
                cout << "INICIADOR: Coleta informacoes.\n";
                cout << "SENTINELA: Defende areas.\n";
                break;

            case 2:
                cout << "\nMira na altura da cabeca.\n";
                cout << "Evite andar e atirar ao mesmo tempo.\n";
                break;

            case 3:
                cout << "\n- Jogue com calma.\n";
                cout << "- Aprenda os mapas.\n";
                cout << "- Comunique informacoes para o time.\n";
                cout << "- Economize creditos quando necessario.\n";
                break;

            case 4:
                cout << "\nPUSH = Avancar.\n";
                cout << "ROTATE = Trocar de bomb.\n";
                cout << "ECO = Economizar dinheiro.\n";
                cout << "FLANK = Atacar pelas costas.\n";
                cout << "ONE TAP = Headshot rapido.\n";
                break;

            case 0:
                cout << "\nSaindo...\n";
                break;

            default:
                cout << "\nOpcao invalida!\n";
        }

    } while(opcao != 0);

    return 0;
}
