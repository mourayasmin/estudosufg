:- initialization(iniciar_NotLetterboxd).
:- dynamic comentario/2. % declara x como estrutura dinâmica com 2 argumentos 
:- dynamic filme/4.
:- dynamic assinatura/3.

% Definição de alguns filmes e suas informaç�es (usamos '[]' qnd tem mais de 1 elemento)
filme('Matrix', ['Ação', 'Ficção Científica'], 1999, 4.5).
filme('Titanic', ['Romance', 'Drama'], 1997, 3.8).
filme('O Poderoso Chefão', ['Drama'], 1972, 4.7).
filme('O Senhor dos Anéis', ['Ação', 'Fantasia'], 2001, 4.2).
filme('Interestelar', ['Ficção Científica', 'Drama'], 2014, 4.6).
filme('Jurassic Park', ['Ação', 'Aventura'], 1993, 4.0).
filme('O Rei Leão', ['Animação', 'Aventura', 'Drama'], 1994, 4.5).
filme('Pantera Negra', ['Ação', 'Aventura', 'Fantasia'], 2018, 4.3).
filme('Forrest Gump', ['Drama', 'Romance'], 1994, 4.8).
filme('A Origem', ['Ação', 'Ficção Científica', 'Suspense'], 2010, 4.4).

% Comentários para os filmes
comentario('Matrix', 'Ótimo filme de ficção científica! Recomendo.').
comentario('Titanic', 'História emocionante, mas um pouco longo.').
comentario('O Poderoso Chefão', 'Um clássico do cinema.').
comentario('O Senhor dos Anéis', 'Fantasia épica com ótima produção.').
comentario('Interestelar', 'Interessante exploração do espaço-tempo.').
comentario('Jurassic Park', 'Dinossauros incríveis, ainda impressiona.').
comentario('O Rei Leão', 'Animação emocionante e memorável.').
comentario('Pantera Negra', 'Herói cativante, ótimos efeitos.').
comentario('Forrest Gump', 'História �nica, personagem inesquecível.').
comentario('A Origem', 'Complexo, mas fascinante. Muitos twists.').

% Exemplos de assinaturas
assinatura('Netflix', 'usuario1', ['Matrix', 'Titanic', 'O Senhor dos Anéis', 'Jurassic Park']).
assinatura('Prime Video', 'usuario2', ['O Poderoso Chefão', 'Forrest Gump']).
assinatura('Disney+', 'usuario1', ['O Rei Leão', 'Pantera Negra']).

% Função para buscar filmes por gênero
buscar_por_genero(Genero) :-
    filme(Filme, Generos, _, _),
    member(Genero, Generos),
    writeln(Filme),
    fail. % Forçar retrocesso para procurar mais filmes do mesmo gênero

% Função para buscar filmes por nome
buscar_por_nome(Filme) :- %  recebe o nome e verifica se o filme está na base de dados.
    (filme(Filme, _, _, _) -> 
    writeln('Encontramos o filme para você');
   writeln('Não encontramos esse filme')).


% Função para exibir detalhes do filme
detalhes_do_filme(Filme) :- % exibe seu nome, gêneros e ano de lançamento.
    filme(Filme, Genero, Ano, Avaliacao), % predicado usado para recuperar as informaç�es sobre o filme a partir da base de dados.
    write('Nome: '), write(Filme), nl, % Essa linha imprime o nome do filme ('write') seguido por uma quebra de linha('nl').
    write('Gêneros: '), write(Genero), nl, % A msm coisa da linha anterior so q em genero.
    write('Ano de Lançamento: '), write(Ano), nl,
    write('Avaliação: '), write(Avaliacao), nl.

% Função para listar filmes assistidos por um usuário em uma plataforma
listar_assistidos(Plataforma, Usuario) :-
    assinatura(Plataforma, Usuario, Assistidos), % usado para recuperar as informaç�es sobre os filmes assistidos pelo usuário em uma plataforma específica.
    write('Filmes assistidos por '), write(Usuario),
    write(' na plataforma '), write(Plataforma), write(': '), write(Assistidos), nl. % escreve os fimes assistidos


% Função para exibir os filmes disponíveis 
mostrar_disponiveis :-
    writeln('Os filmes disponíveis são:'), nl,
    forall(filme(Filme, _, _, _), (
        write(Filme), nl
    ))
.
filme_do_momento :-
    findall(Avaliacao, filme(_, _, _, Avaliacao), Avaliacoes), % Encontra todas as avaliaç�es dos filmes
    max_list(Avaliacoes, MelhorAvaliacao), % Encontra a maior avaliação
    writeln('Filme(s) do momento:'), nl,
    forall(filme(Filme, _, _, MelhorAvaliacao), ( % Para cada filme com a melhor avaliação
        write(Filme), write(' (Avaliação: '), write(MelhorAvaliacao), writeln(')')
    )),
    nl.

adicionar_comentario(Filme, NovoComentario) :-
    assertz(comentario(Filme, NovoComentario)).

listar_comentarios(Filme) :-
    dynamic(comentario/2), % Garante que apenas os comentários dinâmicos sejam listados
    clause(comentario(Filme, Comentario), _), % Obtém cada cláusula individualmente
    writeln(Comentario), % Imprime o comentário
    fail. % Força backtracking para encontrar mais cláusulas
listar_comentarios(_). % Termina o processo de backtracking
 
alterar_avaliacao(Filme, NovaAvaliacao) :-
    retract(filme(Filme, Generos, Ano, _)), % Remove o fato existente do filme
    assertz(filme(Filme, Generos, Ano, NovaAvaliacao)). % Adiciona o novo fato com a avaliação atualizada
    
% Função para adicionar uma nova assinatura
adicionar_assinatura(Plataforma, Usuario, Filmes) :-
    assertz(assinatura(Plataforma, Usuario, Filmes)).

% Predicado principal para exibir a lista de comandos
mostrar_comandos :-
    write('Lista de comandos:'),nl,
    write('1. buscar_por_genero(Genero).'),nl,
    write('2. buscar_por_nome(Filme).'),nl,
    write('3. detalhes_do_filme(Filme).'),nl,
    write('4. listar_assistidos(Plataforma, Usuario).'),nl,
    write('5. listar_comentarios(Filme).'),nl,
    write('6. mostrar_comandos.'),nl,
    write('7. mostrar_disponiveis.'),nl,
	write('8. filme_do_momento.'),nl,
	write('9. adicionar_comentario(Filme, NovoComentario).'),nl,
	write('10. alterar_avaliacao(Filme, NovaAvaliacao).'),nl,
	write('11. adicionar_assinatura(Plataforma, Usuario, Filmes).'),nl,
	write('12. sair.'),nl.
% Predicado principal para iniciar o programa
iniciar_NotLetterboxd :- 
write('Bem-vindo ao sistema de filmes!'), nl,
    mostrar_comandos,
    loop_principal.

% Loop principal para receber comandos do usuário
loop_principal :-
    repeat,
    write('Digite um comando: '),
    read(Comando),
    executar_comando(Comando),
    Comando == sair, !.

executar_comando(Comando) :-
    call(Comando).
