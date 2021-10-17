#include <iostream>

long int fibo (long int anterior, long int atual, int termoN, int contador) {

	if (termoN == 1) {
		std::cout << 0 << std::endl;
		return 0;
	}

	if(contador == 2) anterior = 1;

	std::cout << anterior + atual << " ";


	if(contador == termoN) return 0;

	return fibo(atual, anterior+atual, termoN, contador+1);

}

int main() {
	long int anterior, atual;
	int nTermos, posicao;
  std::cin >> nTermos;
	fibo(0, 0, nTermos, 1);
}