public class Funcionario extends Pessoa{
    protected String matricula;
    protected int salario;

    void aumentar (double porcentagem) {
        this.salario += salario*porcentagem;
    }

    int recanual () {
        int recanual = this.salario*12;

        return recanual;
    }

}
