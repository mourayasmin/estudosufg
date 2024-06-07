public class TestaConta {

    Conta conta1 = new ContaCorrente();
    Conta conta2 = new ContaPoupanca();

    conta1.depositar();
    conta1.sacar();

    conta2.atualizaSaldo();
}
