# Concepts

Record durable understanding, not every definition encountered.

## 2026-11-07: Ponteiros, memória dinâmica, arrays e strings em C

- **Learner's explanation:** `&idade` é o endereço; o ponteiro guarda esse endereço; `*ponteiro` acessa o valor. A stack guarda variáveis locais e a heap é solicitada com `malloc`; `free` devolve a memória. Arrays podem ser percorridos com `p + i`, e strings precisam do `\\0` no final.
- **Corrected understanding:** `ponteiro = &variavel` muda o endereço apontado, enquanto `*ponteiro = valor` altera o valor armazenado nesse endereço. `malloc` retorna um endereço para memória dinâmica, que deve ser liberada com `free`; depois disso, o ponteiro não deve ser desreferenciado e pode ser definido como `NULL`. Para um array, `*(p + i)` acessa o elemento de índice `i`. Uma string C ocupa os caracteres visíveis mais um byte para o terminador nulo.
- **Example:** `int *p = &idade; *p = 30;` altera `idade` para `30`; para uma string de 3 caracteres, `strlen` vale 3 e o armazenamento inclui 4 posições.
- **Related concepts:** stack, heap, `malloc`, `free`, `NULL`, arrays, aritmética de ponteiros, `sizeof`, `strlen`, terminador nulo

## 2026-11-07: Fundamentos de arquitetura e Assembly x86-64

- **Learner's explanation:** registradores são mais rápidos que a RAM; binário usa `0` e `1`; hexadecimal usa `0–9` e `A–F`; `ret` retorna de uma função; um rótulo é parecido com um nome, mas marca uma posição no fluxo.
- **Corrected understanding:** A CPU executa instruções e usa registradores para trabalhar rapidamente com valores. `0x` indica hexadecimal. `mov` move um valor, `add` soma, `sub` subtrai, `cmp` compara sem necessariamente alterar o operando, `je` salta quando a comparação indica igualdade, `call` chama uma função e `ret` retorna ao ponto salvo. Rótulos marcam posições do programa; não são variáveis.
- **Example:** `mov rax, 10`, `add rax, 5`, `sub rax, 3` deixa `RAX` com `12`; `cmp rax, 12` seguido de `je iguais` salta para o rótulo apenas se os valores forem iguais.
- **Related concepts:** CPU, RAM, registradores, RAX, binário, hexadecimal, rótulos, fluxo de controle, x86-64

