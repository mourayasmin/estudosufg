import java.util.ArrayList;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Caixa caixa1 = new Caixa();

        caixa1.nome = "Mario";
        caixa1.horario = 8;
        caixa1.matricula = "12346";
        caixa1.telefone = "987654321";
        caixa1.salario = 1000;
        caixa1.porcentagem = 0.1F;

        caixa1.toStringCaixa();

        Gerente gerente1 = new Gerente();
        gerente1.nome = "Joao";
        gerente1.matricula = "12345";
        gerente1.bonificacao = 1000;
        gerente1.salario = 2000;
        gerente1.telefone = "983548362";
        gerente1.tipo = "PF";
        gerente1.porcentagem = 0.2F;

        gerente1.toStringGerente();


        Cliente cliente1 = new Cliente("A", "1234567890", 20 );
        cliente1.nome = "Davi";
        cliente1.telefone = "986452312";

        Cliente cliente2 = new Cliente("A", "1237347890", 30 );
        cliente2.nome = "Marcela";
        cliente2.telefone = "986452389";

        Cliente cliente3 = new Cliente("A", "12236304815", 34 );
        cliente3.nome = "Marcos";
        cliente3.telefone = "980952212";

    }
}