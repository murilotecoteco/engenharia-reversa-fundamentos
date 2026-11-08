# Concepts

Record durable understanding, not every definition encountered.

## 2026-11-07: Ponteiros, memória dinâmica, arrays e strings em C

- **Learner's explanation:** `&idade` é o endereço; o ponteiro guarda esse endereço; `*ponteiro` acessa o valor. A stack guarda variáveis locais e a heap é solicitada com `malloc`; `free` devolve a memória. Arrays podem ser percorridos com `p + i`, e strings precisam do `\\0` no final.
- **Corrected understanding:** `ponteiro = &variavel` muda o endereço apontado, enquanto `*ponteiro = valor` altera o valor armazenado nesse endereço. `malloc` retorna um endereço para memória dinâmica, que deve ser liberada com `free`; depois disso, o ponteiro não deve ser desreferenciado e pode ser definido como `NULL`. Para um array, `*(p + i)` acessa o elemento de índice `i`. Uma string C ocupa os caracteres visíveis mais um byte para o terminador nulo.
- **Example:** `int *p = &idade; *p = 30;` altera `idade` para `30`; para uma string de 3 caracteres, `strlen` vale 3 e o armazenamento inclui 4 posições.
- **Related concepts:** stack, heap, `malloc`, `free`, `NULL`, arrays, aritmética de ponteiros, `sizeof`, `strlen`, terminador nulo

