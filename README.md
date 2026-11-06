# Engenharia Reversa — Fundamentos

Repositório público de estudo para preparação em C, memória, arquitetura x86-64, Assembly e introdução à engenharia reversa de binários ELF no Linux.

![Status](https://img.shields.io/badge/status-em%20estudo-blue)
![Linux](https://img.shields.io/badge/Linux-Arch%20Linux-1793D1?style=for-the-badge&logo=archlinux&logoColor=white)
![C](https://img.shields.io/badge/C-C17-A8B9CC?style=for-the-badge&logo=c&logoColor=white)
![GDB](https://img.shields.io/badge/GDB-debugging-5C2D91?style=for-the-badge)
![Git](https://img.shields.io/badge/Git-version%20control-F05032?style=for-the-badge&logo=git&logoColor=white)

<p align="center">
  <b>Aprender a enxergar o que acontece por baixo do código.</b>
</p>

## Objetivo

Construir fundamentos suficientes para acompanhar um curso introdutório de engenharia reversa e exploração de binários, sempre com exemplos locais, pequenos e educativos.

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

## Segurança e escopo

Os exercícios devem ser executados apenas em programas próprios, locais e educativos. Este repositório não contém instruções para explorar sistemas de terceiros.

