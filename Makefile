CC := gcc
CFLAGS := -Wall -Wextra -std=c17 -g

.PHONY: help clean

help:
	@printf '%s\n' 'Comandos disponíveis:'
	@printf '%s\n' '  make ARQUIVO=exercicios/arquivo.c run   compila e executa'
	@printf '%s\n' '  make ARQUIVO=exercicios/arquivo.c debug compila e abre o GDB'
	@printf '%s\n' '  make clean                            remove binários de exercícios'

run:
	@test -n "$(ARQUIVO)" || (printf '%s\n' 'Informe ARQUIVO=...'; exit 1)
	$(CC) $(CFLAGS) "$(ARQUIVO)" -o "$(basename $(ARQUIVO))"
	./"$(basename $(ARQUIVO))"

debug:
	test -n "$(ARQUIVO)" || (printf '%s\n' 'Informe ARQUIVO=...'; exit 1)
	$(CC) $(CFLAGS) "$(ARQUIVO)" -o "$(basename $(ARQUIVO))"
	gdb "$(basename $(ARQUIVO))"

clean:
	find exercicios -maxdepth 1 -type f -perm -u=x -delete
