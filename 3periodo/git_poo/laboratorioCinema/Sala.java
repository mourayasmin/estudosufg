import java.util.ArrayList;
import java.util.List;

public class Sala {
    int numero;
    String nome;
    String localizacao;
    List<Filmes> filmes;
    List<Sala> salas;

    public Sala(int numero, String nome, String localizacao, List<Filmes> filmes) {
        this.numero = numero;
        this.nome = nome;
        this.localizacao = localizacao;
        this.filmes = new ArrayList<>();
    }

    public void AdicionarFilme(Filmes filme) {
        filmes.add(filme);
    }

    public void AdicionarSalas(Sala sala) {
        salas.add(sala);
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getLocalizacao() {
        return localizacao;
    }

    public void setLocalizacao(String localizacao) {
        this.localizacao = localizacao;
    }

    public List<Filmes> getFilmes() {
        return filmes;
    }

    public void setFilmes(List<Filmes> filmes) {
        this.filmes = filmes;
    }
}
