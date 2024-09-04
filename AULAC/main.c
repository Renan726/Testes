int main() {
  //declaração de variavel
  int numero = 50;//declara um numero inteiro 32.123
  float valor = 8.37;//declara um valor decimal
  char letra = 'x';//declara uma string
  int valor1, valor2, valor3;//declara trés numeros inteiros

  valor1 = valor2 = valor3 =20;//cada número irá receber o valor inteiro 20.

  printf("Variavel numeor...:%d    \n",numero);//irá apresentar um numero inteiro (50)
  printf("Variavel valor...:%f    \n",valor);//irá apresentar um valor decimal 
  printf("Variavel valor...:%10.2f    \n",valor);//Ex: Float/ele deixará espaço para (Dez) digitos.2f, tera duas casas depois da virgula.
  printf("Variavel valor...:%.2f    \n",valor);//Sem espaçoes e com (.2f), dois digitos após a virgula
  printf("variavel letra...:%c    \n",letra);//ira apresentar uma string (x)

  printf("%d %d %d     \n", valor1, valor2, valor3);//irá apresentar trés numeros inteiros (0) (0) (0).
}

  