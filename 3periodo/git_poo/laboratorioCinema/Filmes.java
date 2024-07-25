import java.util.ArrayList;
import java.util.List;

public class Filmes {
    String nome;
    int ano;
    String origem;
    String lingua;
    String tipo;
    List<Artistas> artistas;

    public Filmes(String nome, int ano, String origem, String lingua, String tipo) {
        this.nome = nome;
        this.ano = ano;
        this.origem = origem;
        this.lingua = lingua;
        this.tipo = tipo;
        this.artistas = new ArrayList<>();
    }

    public void AdicionarArtista(Artistas artista) {
        artistas.add(artista);
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public String getOrigem() {
        return origem;
    }

    public void setOrigem(String origem) {
        this.origem = origem;
    }

    public String getLingua() {
        return lingua;
    }

    public void setLingua(String lingua) {
        this.lingua = lingua;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
}
