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

void exibirTabuleiro(Jogador *jogador) {
	//Essa funcao so serve para testes
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << (jogador->tabuleiro[i][j]) << " ";
		}
		cout << "\n";
	}
}

bool realizarTiro(Jogador *atacante, Jogador *atacado, int linha, int coluna) {

	if (linha >= 0 && linha < 10) {
		if (coluna >= 0 && coluna < 10) {
			//Verificar se existe navio na posicao
			//Atualizando a vida do navio atacado apos a jogada
			if (atacado->tabuleiro[linha][coluna] == '5') {
				atacado->navio.vida_encouracado--;
				atacado->tabuleiro[linha][coluna] = 'X';
				atacante->casas_restantes--;
				return true;
			}
			else if (atacado->tabuleiro[linha][coluna] == '6') { //Navio de guerra 1
				atacado->navio.vida_guerra1--;
				atacado->tabuleiro[linha][coluna] = 'X';
				atacante->casas_restantes--;
				return true;
			}
			else if (atacado->tabuleiro[linha][coluna] == '9') { //Navio de guerra 2
				atacado->navio.vida_guerra2--;
				atacado->tabuleiro[linha][coluna] = 'X';
				atacante->casas_restantes--;
				return true;
			}
			else if (atacado->tabuleiro[linha][coluna] == '3') {
				atacado->navio.vida_porta_avioes--;
				atacado->tabuleiro[linha][coluna] = 'X';
				atacante->casas_restantes--;
				return true;
			}
			else if (atacado->tabuleiro[linha][coluna] == '2') {
				atacado->navio.vida_submarino--;
				atacado->tabuleiro[linha][coluna] = 'X';
				atacante->casas_restantes--;
				return true;
			}
			else if (atacado->tabuleiro[linha][coluna] == 'X') {
				return true;
				//Se o tiro foi dado em um local onde o navio ja foi acertado, realiza uma nova jogada
			}
			else if (atacado->tabuleiro[linha][coluna] == '~'){
				return true;
				//Se o tiro foi dado em um local onde ja foi atirado, realiza uma nova jogada
			}
			else if (atacado->tabuleiro[linha][coluna] == '-') {
				atacado->tabuleiro[linha][coluna] = '~';
				//Se o tiro for na agua passa a vez pro proximo jogador
				return false;
			}
		}
	}

	return true;
}

bool posicionarNavios(Jogador *jogador, int casas, int linha, int coluna, char c) {

	switch (casas) {
	case 5: {
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha >= 5) {

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
							return true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna >= 5) {

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
								return true;
							}
						}
					}
				}
			}
			return false;
		}
	}
	case 6: { //6 para navio de guerra 1
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha >= 4) {

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
							return true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna >= 4) {

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
								return true;
							}
						}
					}
				}
			}
			return false;
		}
	}
	case 9: { //9 para navio de guerra 2
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha >= 4) {

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
							return true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna >= 4) {

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
								return true;
							}
						}
					}
				}
			}
			return false;
		}
	}
	case 3: {
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha >= 3) {

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
							return true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna >= 3) {

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
								return true;
							}
						}
					}
				}
			}
			return false;
		}
	}
	case 2: {
		if (linha >= 0 && linha < 10) {
			if (coluna >= 0 && coluna < 10) {
				if (c == 'v') {

					//Verificar se e possivel posicionar o navio
					if (10 - linha >= 2) {

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
							return true;
						}
					}
				}
				else {
					if (c == 'h') {

						//Verificar se e possivel posicionar o navio
						if (10 - coluna >= 2) {

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
								return true;
							}
						}
					}
				}
			}
			return false;
		}
	}
	}

	return false;
}