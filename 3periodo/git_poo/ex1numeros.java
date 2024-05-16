import java.util.Scanner; //pacote java.util da classe Scanner; serve para leitura de entrada do usuário

public class Main { //classe Main
	//quando a classe é privada, ela é interna (dentro de outra) e é declarada como privada na próxima linha:
	public static void main (String[] args) { /*static significa que o método main é público e pertence à classe e não a instâncias específicas
		String[] é o parâmetro do método main; passa argumentos para o programa quando o executa a partir da linha de comando
		*/
		Scanner scanner = new Scanner(System.in); //o novo objeto scanner é usado para ler entradas a partir do console "(System.in)"

		System.out.println("Digite o número inicial: ");
		int inicial = scanner.nextInt(); //declara a variável inicial como int e armazena pela leitura acima

		System.out.println("Digite o número final: ");
		int numfinal = scanner.nextInt();
		
//calcular a quantidade de números inteiros dentro do intervalo, a soma dos números, sua média e a quantidade de números pares
		int soma = 0;
		int pares = 0;
		double media = 0;
		int inteiros = 0;
		for(int i=inicial; i<=numfinal; i++) {
			inteiros++;
			soma += i;
			media = (inicial + numfinal)/2.0;
			if (i%2 == 0) {
				pares++;
			}
		}
		System.out.println("Quantidade de números inteiros: " + inteiros);		
		System.out.println("Soma dos números: " + soma);
		System.out.println("Média dos números: " + media);
		System.out.println("Quantidade de números pares: " + pares);
	}



}
