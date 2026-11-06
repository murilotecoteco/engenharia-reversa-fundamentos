# Guia de estudo — C e terminal Linux

Este guia apresenta apenas o caminho inicial de C e terminal Linux.

## 1. Baixar o repositório

No terminal, execute:

```bash
git clone https://github.com/murilotecoteco/engenharia-reversa-fundamentos.git
cd engenharia-reversa-fundamentos
```

## 2. Abrir no VS Code

```bash
code .
```

Abra a pasta `exercicios/` e escolha o diretório do dia que deseja estudar.

## 3. Criar um programa em C

Exemplo:

```bash
cd exercicios/dia-01-c-fundamentos/tentativas
touch tentativa-01.c
code tentativa-01.c
```

Escreva o programa no arquivo e salve.

## 4. Compilar e executar

```bash
gcc -Wall -Wextra -std=c17 tentativa-01.c -o tentativa-01
./tentativa-01
```

Se aparecer um erro, leia a mensagem do compilador, localize a linha indicada e tente corrigir antes de pedir a solução.

## 5. Comandos essenciais

```bash
pwd       # mostra a pasta atual
ls        # lista arquivos
cd pasta  # entra em uma pasta
cd ..     # volta uma pasta
mkdir nome-pasta
touch arquivo.c
cat arquivo.c
less arquivo.c
cp origem destino
mv origem destino
rm arquivo
```

Use `man comando` ou `comando --help` para consultar um comando:

```bash
man gcc
gcc --help
```

## 6. Como estudar

1. Leia o enunciado do exercício.
2. Faça uma previsão do resultado.
3. Escreva sua própria tentativa.
4. Compile com `-Wall -Wextra`.
5. Teste entradas diferentes.
6. Explique com suas palavras o que o programa faz.
7. Guarde cada tentativa em `exercicios/.../tentativas/`.

O foco deste guia é aprender C usando o terminal Linux como ferramenta de trabalho.
