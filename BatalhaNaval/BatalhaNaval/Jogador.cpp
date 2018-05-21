#include "Jogador.h"

//Construtor da classe jogador, recebe um objeto de navios para ser manipulado pela classe
Jogador::Jogador(string nome, Navio navio) {
	this->nome = nome;
	this->navio = navio;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tabuleiro[i][j] = '-';
		}
	}
}

//Destrutor da classe jogador
Jogador::~Jogador() {
	//
}

void exibirTabuleiro() {
	//Esse tipo de funcao seria inutil implementar agr devido a interface grafica
}

bool realizarTiro(Jogador *atacante, Jogador *atacado, int linha, int coluna) {

	bool verificar = false;

	do {
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				//Verificar se existe navio na posicao
				if (atacado->tabuleiro[linha][coluna] == '5' || atacado->tabuleiro[linha][coluna] == '6' || atacado->tabuleiro[linha][coluna] == '9' || atacado->tabuleiro[linha][coluna] == '3' || atacado->tabuleiro[linha][coluna] == '2') {
					atacado->tabuleiro[linha][coluna] = 'X';

					atacante->casas_restantes--; //Se houver numero de casas restantes de navios e decrementada

												 //Atualizando a vida do navio atacado apos a jogada
					if (atacado->tabuleiro[linha][coluna] == '5') {
						atacado->navio.vida_encouracado--;
					}
					if (atacado->tabuleiro[linha][coluna] == '6') { //Navio de guerra 1
						atacado->navio.vida_guerra1--;
					}
					if (atacado->tabuleiro[linha][coluna] == '9') { //Navio de guerra 2
						atacado->navio.vida_guerra2--;
					}
					if (atacado->tabuleiro[linha][coluna] == '3') {
						atacado->navio.vida_porta_avioes--;
					}
					if (atacado->tabuleiro[linha][coluna] == '2') {
						atacado->navio.vida_submarino--;
					}

					verificar = true;
				}
				else if (atacado->tabuleiro[linha][coluna] == '-') {
					atacado->tabuleiro[linha][coluna] = 'X';
					//Se o tiro for na agua passa a vez pro proximo jogador
					verificar = false;
				}
				else {
					if (atacado->tabuleiro[linha][coluna] == 'X')
						verificar = true;
					//Se o tiro foi dado em um local onde ja foi atirado, realiza uma nova jogada
				}
			}
		}
	} while (verificar == true);

	return true;
}

bool posicionarNavios(Jogador *jogador, int casas, int linha, int coluna, char c) {

	bool sucesso = false;

	switch (casas) {
	case 5: {
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha != 1) {

						//Verificar se nao ha outros navios posicionados
						int espacos = 0;
						for (int i = linha; i < (linha + 5); i++) {
							if (jogador->tabuleiro[i][coluna] == '-') {
								espacos++;
							}
						}

						//Posiciona o navio se o espaco for suficiente
						if (espacos >= 5) {
							for (int i = linha; i < (linha + 5); i++) {
								jogador->tabuleiro[i][coluna] = '5';
							}
							sucesso = true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna != 1) {

							//Verificar se nao ha outros navios posicionados
							int espacos = 0;
							for (int i = coluna; i < (coluna + 5); i++) {
								if (jogador->tabuleiro[linha][i] == '-') {
									espacos++;
								}
							}

							//Posiciona o navio se o espaco for suficiente
							if (espacos >= 5) {

								for (int i = coluna; i < (coluna + 5); i++) {
									jogador->tabuleiro[linha][i] = '5';
								}
								sucesso = true;
							}
						}
					}
				}
			}
		}
	}
	case 6: { //6 para navio de guerra 1
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha != 1) {

						//Verificar se nao ha outros navios posicionados
						int espacos = 0;
						for (int i = linha; i < (linha + 4); i++) {
							if (jogador->tabuleiro[i][coluna] == '-') {
								espacos++;
							}
						}

						//Posiciona o navio se o espaco for suficiente
						if (espacos >= 4) {
							for (int i = linha; i < (linha + 4); i++) {
								jogador->tabuleiro[i][coluna] = '6'; //Como existem 2 navios de guerra, entao achei esse jeito de diferenciar onde os 2 estao e nao ficar mt complexo de fazer isso
							}
							sucesso = true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna != 1) {

							//Verificar se nao ha outros navios posicionados
							int espacos = 0;
							for (int i = coluna; i < (coluna + 4); i++) {
								if (jogador->tabuleiro[linha][i] == '-') {
									espacos++;
								}
							}

							//Posiciona o navio se o espaco for suficiente
							if (espacos >= 4) {

								for (int i = coluna; i < (coluna + 4); i++) {
									jogador->tabuleiro[linha][i] = '6';
								}
								sucesso = true;
							}
						}
					}
				}
			}
		}
	}
	case 9: { //9 para navio de guerra 2
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha != 1) {

						//Verificar se nao ha outros navios posicionados
						int espacos = 0;
						for (int i = linha; i < (linha + 4); i++) {
							if (jogador->tabuleiro[i][coluna] == '-') {
								espacos++;
							}
						}

						//Posiciona o navio se o espaco for suficiente
						if (espacos >= 4) {
							for (int i = linha; i < (linha + 4); i++) {
								jogador->tabuleiro[i][coluna] = '9'; //Como existem 2 navios de guerra, entao achei esse jeito de diferenciar onde os 2 estao e nao ficar mt complexo de fazer isso
							}
							sucesso = true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna != 1) {

							//Verificar se nao ha outros navios posicionados
							int espacos = 0;
							for (int i = coluna; i < (coluna + 4); i++) {
								if (jogador->tabuleiro[linha][i] == '-') {
									espacos++;
								}
							}

							//Posiciona o navio se o espaco for suficiente
							if (espacos >= 4) {

								for (int i = coluna; i < (coluna + 4); i++) {
									jogador->tabuleiro[linha][i] = '9';
								}
								sucesso = true;
							}
						}
					}
				}
			}
		}
	}
	case 3: {
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha != 1) {

						//Verificar se nao ha outros navios posicionados
						int espacos = 0;
						for (int i = linha; i < (linha + 3); i++) {
							if (jogador->tabuleiro[i][coluna] == '-') {
								espacos++;
							}
						}

						//Posiciona o navio se o espaco for suficiente
						if (espacos >= 3) {
							for (int i = linha; i < (linha + 3); i++) {
								jogador->tabuleiro[i][coluna] = '3';
							}
							sucesso = true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna != 1) {

							//Verificar se nao ha outros navios posicionados
							int espacos = 0;
							for (int i = coluna; i < (coluna + 3); i++) {
								if (jogador->tabuleiro[linha][i] == '-') {
									espacos++;
								}
							}

							//Posiciona o navio se o espaco for suficiente
							if (espacos >= 3) {

								for (int i = coluna; i < (coluna + 3); i++) {
									jogador->tabuleiro[linha][i] = '3';
								}
								sucesso = true;
							}
						}
					}
				}
			}
		}
	}
	case 2: {
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha != 1) {

						//Verificar se nao ha outros navios posicionados
						int espacos = 0;
						for (int i = linha; i < (linha + 2); i++) {
							if (jogador->tabuleiro[i][coluna] == '-') {
								espacos++;
							}
						}

						//Posiciona o navio se o espaco for suficiente
						if (espacos >= 2) {
							for (int i = linha; i < (linha + 2); i++) {
								jogador->tabuleiro[i][coluna] = '2';
							}
							sucesso = true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna != 1) {

							//Verificar se nao ha outros navios posicionados
							int espacos = 0;
							for (int i = coluna; i < (coluna + 2); i++) {
								if (jogador->tabuleiro[linha][i] == '-') {
									espacos++;
								}
							}

							//Posiciona o navio se o espaco for suficiente
							if (espacos >= 2) {

								for (int i = coluna; i < (coluna + 2); i++) {
									jogador->tabuleiro[linha][i] = '2';
								}
								sucesso = true;
							}
						}
					}
				}
			}
		}
	}
	}

	return sucesso;
}