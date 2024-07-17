using System;
using System.Collections.Generic;
using projetoFinalLPP;


class Program
{
    static List<Tenis> listaTenis = new List<Tenis>();

    static void Main(string[] args)
    {
        bool continuar = true;

        while (continuar)
        {
            Console.WriteLine("\nMenu de Opções:");
            Console.WriteLine("1. Adicionar Tênis");
            Console.WriteLine("2. Exibir Lista de Tênis");
            Console.WriteLine("3. Avaliar Tênis");
            Console.WriteLine("4. Sair");
            Console.Write("Escolha uma opção: ");
            string opcao = Console.ReadLine();

            switch (opcao)
            {
                case "1":
                    AdicionarTenisMenu();
                    break;
                case "2":
                    ExibirListaTenis();
                    break;
                case "3":
                    AvaliarTenisMenu();
                    break;
                case "4":
                    continuar = false;
                    break;
                default:
                    Console.WriteLine("Opção inválida. Tente novamente.");
                    break;
            }
        }
    }

    static void AdicionarTenisMenu()
    {
        Console.Write("Nome do Tênis: ");
        string nome = Console.ReadLine();
        Console.Write("Marca: ");
        string marca = Console.ReadLine();
        Console.Write("Estilo (Casual, Skate, Corrida): ");
        string estilo = Console.ReadLine();
        Console.Write("Tamanho: ");
        int tamanho = int.Parse(Console.ReadLine());

        Tenis tenis;

        switch (estilo.ToLower())
        {
            case "casual":
                tenis = new TenisCasual(nome, marca, tamanho);
                break;
            case "skate":
                tenis = new TenisSkate(nome, marca, tamanho);
                break;
            case "corrida":
                tenis = new TenisCorrida(nome, marca, tamanho);
                break;
            default:
                Console.WriteLine("Estilo inválido. Tênis não adicionado.");
                return;
        }

        AdicionarTenis(tenis);
        Console.WriteLine("Tênis adicionado com sucesso.");
    }

    static void ExibirListaTenis()
    {
        Console.WriteLine("\nLista de Tênis:");
        foreach (var tenis in listaTenis)
        {
            tenis.Exibir();
        }
    }

    static void AvaliarTenisMenu()
    {
        Console.Write("Nome do Tênis a ser avaliado: ");
        string nome = Console.ReadLine();
        Console.Write("Nota: ");
        double nota = double.Parse(Console.ReadLine());

        AvaliarTenis(nome, nota);
    }

    static void AdicionarTenis(Tenis tenis)
    {
        listaTenis.Add(tenis);
    }

    static void AvaliarTenis(string nome, double nota)
    {
        try
        {
            var tenis = listaTenis.Find(t => t.Nome == nome);
            if (tenis == null)
            {
                throw new Exception("Tênis não encontrado.");
            }
            tenis.Nota = nota;
            Console.WriteLine($"Tênis {nome} avaliado com nota {nota}.");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Erro ao avaliar tênis: {ex.Message}");
        }
    }
}
