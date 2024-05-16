import java.util.Scanner;

class Dados {
    String nome;
    String matricula;
}

public class Main {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a quantidade de alunos: ");
        int x = scanner.nextInt();
        scanner.nextLine(); //consumir a quebra de linha

        Dados[] dados = new Dados[x]; //em C seria: "Dados dados[x];"
        
        for(int i=0; i<x; i++) {
            dados[i] = new Dados();
            System.out.println("Digite o nome do aluno " + (i + 1) + ": ");
            dados[i].nome = scanner.nextLine();
            System.out.println("Digite a matrícula do aluno: " + (i + 1) + ": ");
            dados[i].matricula = scanner.nextLine();
        }
        System.out.println("Lista de Alunos: ");
        for(int i=0; i<x; i++) {
            System.out.println(dados[i].matricula + " - " + dados[i].nome); //em C seria "printf("%d - %s\n", dados[i].matricula, dados[i].nome);"
        }
    }
}