import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite os números X, Y e Z: ");
        int[] v = new int[3];
        for(int i=0; i<3; i++) {
            v[i] = scanner.nextInt();
        }
        int maior = v[0]; 

        for(int i=1; i<3; i++) { 
            if(v[i] > maior) {
                maior = v[i]; 
            }
        }
        int menor = v[0]; 
        for(int i=1; i<3; i++) { 
            if(v[i] < menor) {
                menor = v[i]; 
            }
        }
        int meio = 0; 
        for(int i=0; i<3; i++) {
            if(v[i] != maior && v[i] != menor) {
                meio = v[i]; 
            }
        }
        System.out.println("Os números em ordem crescente são: " + menor + " " + meio + " " + maior);
    }
}
