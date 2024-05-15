public class Cliente extends Pessoa{
    protected int idade;
    protected String cpf;
    protected String status;

    void toStringCliente () {
        System.out.println("nome: " + nome + "\ntelefone: " + telefone + "\nidade: " + idade + "\ncpf: " + cpf + "\nstatus: " + status);
    }

    void desativar () {
        this.status = "I";
    }

    public Cliente(String status, String cpf, int idade) {
        this.status = status;
        this.cpf = cpf;
        this.idade = idade;
    }
}
