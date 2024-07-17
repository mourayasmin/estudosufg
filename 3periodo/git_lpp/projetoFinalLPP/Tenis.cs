namespace projetoFinalLPP;

public class Tenis
{
    
    public string Nome { get; set; }
    public string Marca { get; set; }
    public string Estilo { get; set; }
    public int Tamanho { get; set; }
    public double Nota { get; set; }

    public Tenis(string nome, string marca, string estilo, int tamanho)
    {
        Nome = nome;
        Marca = marca;
        Estilo = estilo;
        Tamanho = tamanho;
        Nota = 0.0; 
    }

    public virtual void Exibir()
    {
        Console.WriteLine($"Nome: {Nome}, Marca: {Marca}, Estilo: {Estilo}, Tamanho: {Tamanho}, Nota: {Nota}");
    }
}
