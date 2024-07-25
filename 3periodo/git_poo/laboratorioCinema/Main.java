import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Sala> salas = new ArrayList<>();

        while (true) {
            System.out.println("Escolha entre as opções abaixo:");
            System.out.println("1 - Adicionar um filme em uma sala");
            System.out.println("2 - Adicionar um artista em um filme");
            System.out.println("3 - Encerrar o programa");
            int option = scanner.nextInt();
            scanner.nextLine();

            if (option == 3) {
                break;
            }

            if (option == 1) {
                System.out.println("Informe o número da sala:");
                int numeroDaSala = scanner.nextInt();
                scanner.nextLine();

                System.out.println("Informe o nome da sala:");
                String nomeDaSala = scanner.nextLine();

                System.out.println("Informe a localização da sala:");
                String localizacaoDaSala = scanner.nextLine();

                Sala sala = new Sala(numeroDaSala, nomeDaSala, localizacaoDaSala, new ArrayList<>());
                salas.add(sala);

                System.out.println("Informe o nome do filme:");
                String nomeDoFilme = scanner.nextLine();

                System.out.println("Informe o ano do filme:");
                int anoDoFilme = scanner.nextInt();
                scanner.nextLine();

                System.out.println("Informe a origem do filme:");
                String origemDoFilme = scanner.nextLine();

                System.out.println("Informe a língua do filme:");
                String linguaDoFilme = scanner.nextLine();

                System.out.println("Informe o tipo do filme:");
                String tipoDoFilme = scanner.nextLine();

                Filmes filme = new Filmes(nomeDoFilme, anoDoFilme, origemDoFilme, linguaDoFilme, tipoDoFilme);
                sala.AdicionarFilme(filme);

                try {
                    gravarSalaEmArquivo(sala);
                    gravarFilmeEmArquivo(filme);
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }

            if (option == 2) {
                System.out.println("Informe o nome do artista:");
                String nomeDoArtista = scanner.nextLine();

                System.out.println("Informe a nacionalidade do artista:");
                String nacionalidadeDoArtista = scanner.nextLine();

                System.out.println("Informe a idade do artista:");
                int idadeDoArtista = scanner.nextInt();
                scanner.nextLine();

                System.out.println("Informe o nome do filme:");
                String nomeDoFilme = scanner.nextLine();

                Filmes filmeReferente = null;
                for (Sala sala : salas) {
                    for (Filmes filme : sala.getFilmes()) {
                        if (filme.getNome().equals(nomeDoFilme)) {
                            filmeReferente = filme;
                            break;
                        }
                    }
                    if (filmeReferente != null) {
                        break;
                    }
                }

                if (filmeReferente != null) {
                    Artistas artista = new Artistas(nomeDoArtista, nacionalidadeDoArtista, idadeDoArtista);
                    filmeReferente.AdicionarArtista(artista);

                    try {
                        gravarArtistaEmArquivo(artista);
                    } catch (IOException e) {
                        e.printStackTrace();
                    }

                } else {
                    System.out.println("Filme não encontrado.");
                }
            }
        }
        scanner.close();
    }

    private static void gravarSalaEmArquivo(Sala sala) throws IOException {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("salas.txt", true))) {
            writer.write("Número da Sala: " + sala.getNumero() + "\n");
            writer.write("Nome da Sala: " + sala.getNome() + "\n");
            writer.write("Localização da Sala: " + sala.getLocalizacao() + "\n");
            writer.write("\n");
        }
    }

    private static void gravarFilmeEmArquivo(Filmes filme) throws IOException {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("filmes.txt", true))) {
            writer.write("Nome do Filme: " + filme.getNome() + "\n");
            writer.write("Ano do Filme: " + filme.getAno() + "\n");
            writer.write("Origem do Filme: " + filme.getOrigem() + "\n");
            writer.write("Língua do Filme: " + filme.getLingua() + "\n");
            writer.write("Tipo do Filme: " + filme.getTipo() + "\n");
            writer.write("\n");
        }
    }

    private static void gravarArtistaEmArquivo(Artistas artista) throws IOException {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("artistas.txt", true))) {
            writer.write("Nome do Artista: " + artista.getNome() + "\n");
            writer.write("Nacionalidade do Artista: " + artista.getNacionalidade() + "\n");
            writer.write("Idade do Artista: " + artista.getIdade() + "\n");
            writer.write("\n");
        }
    }
}