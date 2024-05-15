public class Caixa extends Funcionario{
    protected int horario;
    protected float porcentagem;

    void toStringCaixa () {
        System.out.println("nome: " + this.nome + " telefone: " + this.telefone + " horario: " + this.horario + " salario: " + this.salario + " recebimento anual: " + this.recanual());
    }
}
