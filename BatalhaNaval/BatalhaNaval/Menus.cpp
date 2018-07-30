#include "Menus.h"
#include "Jogador.h"
#include "Navio.h"

void menu() {
	//Esse tipo de funcao seria inutil implementar agr devido a interface grafica
}

void iniciarJogo() { //Testes por enquanto

	Navio *navioplayer = new Navio();
	Navio *naviocpu = new Navio();
	Jogador *player = new Jogador("Player", *navioplayer);
	Jogador *bot = new Jogador("BOT", *naviocpu);
	
	bool sucesso = false;
	int linha;
	int coluna;
	char posicao;

	cout << "5 = Navio porta-avioes\n";
	cout << "6 = Navio de guerra 1\n";
	cout << "9 = Navio de guerra 2\n";
	cout << "3 = Navio encouracado\n";
	cout << "2 = Submarino\n";
	cout << "- = Posicao desconhecida\n";
	cout << "~ = Tiro na agua\n";
	cout << "X = Tiro no navio\n";

	cout << "\n";
	cout << "SAO APENAS TESTES\n";
	do { //Enquanto a posicao de escolha do navio nao for valida, o usuario devera continuar informando as entradas
		 //A posicao e verificada pela funcao posicionarNavios
		 //Caso de teste para o posicionamento do navio de 5 casas
		cout << "\n";
		cout << "Digite a linha para posicionar o navio: 0 a 9\n";
		cin >> linha;
		cout << "Digite a coluna para posicionar o navio: 0 a 9\n";
		cin >> coluna;
		cout << "Digite a posicao: v ou h\n";
		cin >> posicao;
		sucesso = posicionarNavios(player, 5, linha, coluna, posicao);
	 } while (sucesso == false);

	do { //Enquanto acertar o navio, ou atirar onde ja foi acertado continua a jogar
		cout << "\n";
		cout << "Digite a linha para atirar: 0 a 9\n";
		cin >> linha;
		cout << "Digite a coluna para atirar: 0 a 9\n";
		cin >> coluna;
		sucesso = realizarTiro(bot, player, linha, coluna);
	} while (sucesso == true);
	
	exibirTabuleiro(player);

}

