public class Cliente {
    private String nome;
    private int telefone;

    public void getNome (String nome){
        this.nome = nome;
    }

    public void getTelefone (int telefone){
        this.telefone = telefone;
    }
    public String setNome(){
        return nome;
    }
    public int setTelefone(){
        return telefone;
    }
    public Cliente(String nome, int telefone) { }

}
