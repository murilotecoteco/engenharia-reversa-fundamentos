; Exemplo didático de Assembly x86-64 (sintaxe NASM)
; Este arquivo registra as instruções estudadas no Dia 3.

section .text

inicio:
    ; Coloca 10 no registrador RAX.
    mov rax, 10

    ; Soma 5: RAX passa a valer 15.
    add rax, 5

    ; Subtrai 3: RAX passa a valer 12.
    sub rax, 3

    ; Compara RAX com 12 sem alterar o valor de RAX.
    cmp rax, 12

    ; Salta para "iguais" se RAX for igual a 12.
    je iguais

    ; Este rótulo marca um caminho alternativo.
    diferente:
        ret

iguais:
    ; Chama uma função e depois retorna ao ponto de chamada.
    call funcao
    ret

funcao:
    ; Uma função Assembly retorna usando ret.
    ret
