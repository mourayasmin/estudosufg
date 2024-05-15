public class Gerente extends Funcionario{
    protected int bonificacao;
    protected String tipo;
    protected float porcentagem;

    void toStringGerente() {
        System.out.println("nome: " + this.nome + " telefone: " + this.telefone + " salario: " + this.salario + " recebimento anual: " + this.recanual() + " tipo: " + this.tipo);
    }

    int recanual () {
        int recanual = this.salario*12 + bonificacao*12;

        return recanual;
    }
}
