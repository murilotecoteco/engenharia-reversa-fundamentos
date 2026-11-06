# Engenharia Reversa — Fundamentos

Repositório público com dois objetivos complementares: apoiar meus estudos na UTFPR, especialmente na disciplina de Linhas de Comando e Terminal com C, e preparar minha base para um curso introdutório de Engenharia Reversa e Exploração de Binários.

![Status](https://img.shields.io/badge/status-em%20estudo-blue)
![Linux](https://img.shields.io/badge/Linux-Arch%20Linux-1793D1?style=for-the-badge&logo=archlinux&logoColor=white)
![C](https://img.shields.io/badge/C-C17-A8B9CC?style=for-the-badge&logo=c&logoColor=white)
![GDB](https://img.shields.io/badge/GDB-debugging-5C2D91?style=for-the-badge)
![Git](https://img.shields.io/badge/Git-version%20control-F05032?style=for-the-badge&logo=git&logoColor=white)

<p align="center">
  <b>Aprender a enxergar o que acontece por baixo do código.</b>
</p>

## Objetivos

### UTFPR — apoio de Linhas de Comando e Terminal

Usar o terminal Linux como ferramenta de apoio para compilar, executar, depurar e analisar os programas escritos em C. O terminal é importante para a disciplina, mas não é o foco principal desta trilha.

### Curso introdutório de Engenharia Reversa

Construir fundamentos de C, memória, arquitetura x86-64, Assembly e análise de binários ELF, sempre com exemplos próprios, locais e educativos.

Os dois caminhos se complementam. O foco principal é C, Assembly e arquitetura de computadores; o terminal entra como ambiente prático para compilar, executar e analisar os exercícios.

## Trilha de vídeos

Os vídeos abaixo são referências de estudo. Não assista passivamente: pause, faça previsões, reproduza os exemplos no VS Code e registre dúvidas no diretório `learning/`.

### 1. Linguagem C

- [Linguagem C: O Curso Definitivo — Aprenda do Zero em 10 Horas](https://www.youtube.com/watch?v=EIGAc5mdPp) — trilha principal de fundamentos.
- [Vídeo complementar de C](https://youtu.be/Hpus3bJ1CFg?si=LoxyD1leZJFCZ1b9) — assistir junto da trilha principal e transformar os exemplos em exercícios próprios.
- [Programação em C: Ponteiros e Alocação Dinâmica](https://www.youtube.com/watch?v=ar-YTOphapg) — ponteiros, endereços, arrays e memória dinâmica.

### 2. Arquitetura e Assembly x86-64

- [Assembly x86-64 — Introdução à Arquitetura](https://www.youtube.com/watch?v=lIVxtRmRAHY) — arquitetura, endianness e endereçamento de memória.
- [Fundamentos de Assembly x86-64 — Aula 1](https://www.youtube.com/watch?v=Ej6U-qk0bdE) — introdução prática a Assembly x86-64 com NASM.

### 3. Ordem recomendada

1. Curso principal de C até funções, arrays e strings.
2. Vídeo complementar de C, praticando os exemplos.
3. Ponteiros e alocação dinâmica.
4. Arquitetura de computadores: CPU, registradores, RAM, stack e heap.
5. Assembly x86-64: `mov`, `add`, `sub`, `cmp`, `jmp`, `call` e `ret`.
6. Relação entre C e Assembly usando GCC, GDB e `objdump`.

O estudo de terminal deve acompanhar os exercícios, mas não substituir o estudo dos conceitos centrais.

## Método de estudo

O estudo segue este ciclo:

> tentar → prever → receber uma dica → implementar → testar → explicar → revisar → recuperar depois

O professor particular não entrega a solução imediatamente. Ele faz uma pergunta por vez, verifica a tentativa, diferencia erro de sintaxe, lógica e compreensão, e só aumenta a dificuldade quando o conceito estiver demonstrado.

## Cronograma inicial

- **Dia 1 — C:** estrutura, compilação, tipos, operadores, condicionais, laços e funções.
- **Dia 2 — Memória:** endereços, ponteiros, arrays, stack e heap.
- **Dia 3 — Arquitetura e Assembly:** CPU, registradores, binário, hexadecimal e instruções básicas.
- **Dia 4 — Binários:** compilação, ELF, `file`, `strings`, `objdump` e comparação entre C e Assembly.

O ponto de retomada atual está registrado em [`docs/professor-particular.md`](docs/professor-particular.md).

## Caderno de exercícios

Cada sessão deve deixar um registro no repositório. A organização é feita por dia e por tema:

```text
exercicios/
├── dia-01-c-fundamentos/
│   ├── enunciado.md
│   └── tentativas/
├── dia-02-memoria-ponteiros/
├── dia-03-arquitetura-assembly/
└── dia-04-binarios/
```

As tentativas ficam guardadas mesmo quando contêm erros, porque elas mostram a evolução do raciocínio. As correções e conceitos duráveis ficam em `learning/`.

## Ferramentas

O kit usa ferramentas locais do Linux: GCC, binutils (`file`, `strings`, `objdump`) e, opcionalmente, GDB. Não há dependências de runtime nem scripts obrigatórios para começar.

## Começo rápido

```bash
git clone https://github.com/murilotecoteco/engenharia-reversa-fundamentos.git
cd engenharia-reversa-fundamentos
code .
```

Abra um arquivo `.c` em `exercicios/`, use `Ctrl+Shift+B` para compilá-lo e a configuração de depuração do VS Code para acompanhar a execução no GDB.

Também é possível usar o terminal:

```bash
make ARQUIVO=exercicios/seu-arquivo.c run
make ARQUIVO=exercicios/seu-arquivo.c debug
```

## Pré-requisitos e extensões

O ambiente foi preparado para Arch Linux. As ferramentas de sistema já disponíveis são GCC, GDB, binutils, `file`, `strings`, `make` e Git.

O VS Code recomenda as extensões C/C++ da Microsoft e GitHub Copilot/Copilot Chat. Copilot é opcional: o estudo funciona sem ele, mas, quando usado, deve permanecer no modo Chat e com sugestões inline desativadas para preservar o raciocínio.

## Organização

- `.github/copilot-instructions.md` — regras gerais para o modo de aprendizagem.
- `.github/prompts/` — comandos de estudo para o Copilot Chat.
- `docs/professor-particular.md` — contexto completo do professor e cronograma.
- `exercicios/` — exercícios e pequenos programas produzidos durante o estudo.
- `learning/` — registros duráveis de conceitos, erros e revisões.
- `.vscode/` — recomendações de extensões, compilação e depuração com GDB.

## Guia de uso: C e terminal Linux

Para um roteiro simples de estudo focado em C e nos comandos essenciais do terminal Linux, consulte [`docs/guia-c-terminal.md`](docs/guia-c-terminal.md).

## Segurança e escopo

Os exercícios devem ser executados apenas em programas próprios, locais e educativos. Este repositório não contém instruções para explorar sistemas de terceiros.

