# Dia 3 — Arquitetura e Assembly

Registro conceitual dos fundamentos estudados:

- CPU, RAM e registradores;
- conversão básica entre binário, decimal e hexadecimal;
- registrador `RAX`;
- instruções `mov`, `add` e `sub`;
- comparação com `cmp`;
- salto condicional com `je`;
- chamada e retorno de funções com `call` e `ret`;
- diferença entre rótulos e variáveis.

O conteúdo foi estudado por meio de interpretação e previsão de resultados, sem exigir a escrita de código Assembly.

## Exercícios realizados

### 1. Binário para decimal

Foram praticadas as conversões:

```text
1010₂ = 10₁₀
0101₂ = 5₁₀
1100₂ = 12₁₀
0011₂ = 3₁₀
1000₂ = 8₁₀
```

### 2. Hexadecimal para decimal

Foram praticadas as conversões:

```text
A₁₆ = 10₁₀
10₁₆ = 16₁₀
1A₁₆ = 26₁₀
0x20 = 32₁₀
0x10 = 16₁₀
```

### 3. Operações em um registrador

Interpretação do fluxo:

```text
mov rax, 10
add rax, 5
sub rax, 3
```

Resultado: `RAX` termina com `12`.

### 4. Comparação e salto

Foi analisado o fluxo:

```text
cmp rax, 12
je iguais
```

O salto acontece somente quando `RAX` é igual a `12`. `iguais` é um rótulo, não uma variável.

### 5. Chamada e retorno de função

Foi estudado o fluxo conceitual:

```text
call funcao
funcao:
    ret
```

`call` chama a função e `ret` retorna ao ponto em que ela foi chamada.
