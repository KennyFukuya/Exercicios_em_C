Considere o problema de decidir se uma dada sequência de parênteses e colchetes está bem-formada (ou seja, parênteses e colchetes são fechados na ordem inversa àquela em que foram abertos). Por exemplo, a sequência: ( ( ) [ ( ) ] ) está bem-formada, enquanto ( [ ) ] está malformada. Suponha que a sequência de parênteses e colchetes está armazenada em uma string ASCII s. Como é hábito em C, o último caractere da string é \0 (o byte nulo). Escreva uma implementação usando pilha que reportar as abaixo:

BALANCEAMENTO OK ... para o caso de balanceamentos bem formados e DESBALANCEADO ... caso contrario

Os símbolos válidos a serem avaliados são ( , ), [, e ] os demais não interessam.
