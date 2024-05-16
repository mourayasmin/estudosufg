import java.util.Scanner;

class Curso {
    String nome;
    int periodos;
    String horario;
    String campus;
}
public class Main {

    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);
        Curso[] cursos = new Curso[4];
        for(int i=0; i<4; i++) {
            cursos[i] = new Curso();
            System.out.println("Digite o nome do curso " + (i + 1) + ": ");
            cursos[i].nome = scanner.nextLine();
            System.out.println("Digite a quantidade de períodos do curso " + (i + 1) + ": ");
            cursos[i].periodos = Integer.parseInt(scanner.nextLine());
            System.out.println("Digite o horário do curso " + (i + 1) + ": ");
            cursos[i].horario = scanner.nextLine();
            System.out.println("Digite o campus do curso "+ (i + 1) + ": ");
            cursos[i].campus = scanner.nextLine();
        }
        System.out.println("Lista de cursos: ");
        for(int i=0; i<4; i++) {
            System.out.println(cursos[i].nome + ", " + cursos[i].periodos + " períodos, " + cursos[i].horario + ", " + cursos[i].campus);

        }
        scanner.close();
    }

}
