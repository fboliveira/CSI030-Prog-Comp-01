# CSI030/CSI101 - Computer Programming I

## Introdução

---

### O que é um computador?

- É um dispositivo capaz de realizar computações (*cálculos*) e tomar decisões lógicas muito mais rapidamente que nós humanos.
- É composto de parte física (*hardware*) e parte lógica (*software*).
- Ele processa informações de acordo com um conjunto de comandos que formam um programa.
- Os comandos são escritos em uma linguagem de programação.

---

### Organização do computador

- O hardware do computador é entendido pelo software em **6 partes**:

1. Unidades de **entrada de dados**: teclado, mouse, dentre outros;
1. Unidades de **saída de dados**: monitor, impressora, rede, dentre outros;
1. Unidade de **memória principal**: memória RAM;
1. Unidade **lógica e aritmética** (ULA);
1. Unidade **central de processamento** (CPU);
1. Unidade de **armazenamento secundário**: Harddisk, DVD, pendrive.

---

### Arquitetura de von Neumann

![Modelo lógico do computador](https://upload.wikimedia.org/wikipedia/commons/9/95/Arquiteturavn.png)

---

### Como funciona o computador?

- Um programa é uma sequência de `0`s e `1`s armazenado na memória do computador.
- O programa é executado pela CPU, que interpreta as sequências de `0`s e `1`s como comandos.
- Aritmética binária inteira: cálculos são feitos com números inteiros representados na **base 2**.
- **Bit**: Menor unidade de informação (representa os dois estados - `0` e `1`- da lógica binária).

#### Representação binária

- O número `5` (**base 10**) equivale a `101` (**base 2**).
- O número `101` (base 2) pode ser representado como:
  - `101` (base 2): mínimo de bits necessário.
  - `0101` (base 2): com 4 bits.
  - `0000 0000 0000 0101` (base 2): com 16 bits.
  - `0000 0000 0000 0000 0000 0000 0000 0101` (base 2):com 32 bits.

#### Transformação de base

- `18` (**base 10**) -> __(**base 2**).
- `10110`(**base 2**) -> __(**base 10**).

[Exemplos e outras informações](https://docente.ifsc.edu.br/alex.forghieri/MaterialDidatico/Arquitetura%20de%20computadores/Material%20das%20aulas/08%20-%2017-06-2016/Convers%C3%A3o%20de%20Bases.pdf)

#### ASCII

- *American Standard Code for Information Interchange - ASCII*
- Cada caractere é representado por **1 byte** (*8 bits*).
- Exemplos de tabelas e outras referências:

  - [Alura - Código binário](https://www.alura.com.br/artigos/sistema-codigo-binario)
  - [IME/USP - TABELA ASCII](https://www.ime.usp.br/~kellyrb/mac2166_2015/tabela_ascii.html)
  - [UFU - ASCII](https://repositorio.ufu.br/bitstream/123456789/14443/4/SFOLima4DISSPRT.pdf)
  - [Wikipedia - ASCII](https://pt.wikipedia.org/wiki/ASCII)

![10 tipos de pessoas](https://www.alura.com.br/artigos/assets/sistema-codigo-binario/imagem13.png)

---

### Algoritmos

- **Algoritmos** são **sequências** de passos, **precisos** e bem **definidos**, que descrevem **como** realizar uma **tarefa**.

- Podem ser especificados/representados em **português**, **português estruturado**, **fluxogramas**, **linguagens de programação**, dentre outros.

#### Algoritmo em português

**Calcule a soma dos números 1234 e 456.**

1. Escrever os números em um papel, um abaixo do outro, alinhados pelo digito das unidades.
1. Para cada coluna de 1 ou mais dígitos, somar os dígitos alinhados. Se o valor da soma ultrapasse 9, adicionar 1 à coluna imediatamente à esquerda da coluna atual e anotar o dígito das unidades desta soma como o resultado da soma.
1. Após executar todas as somas, ler o resultado final.

#### Algoritmo em Português Estruturado

```Português Estruturado
Escreva os números em um papel, um abaixo do outro, alinhados pelo digito das unidades.

Para cada coluna de 1 ou mais dígitos:

  Some os dígitos alinhados.
  Se o valor da soma ultrapasse 9:
    Adicione 1 à coluna imediatamente à esquerda da coluna atual.

  Anote o dígito das unidades desta soma como o resultado da soma.

Use a soma criada como resposta.
```

##### Exercício

Dados `N` números, escrever um algoritmo em `português estruturado` que calcule a média destes números.

---

#### Linguagens de Programação

- As linguagens são o mecanismo que utilizamos para dar ordens/instruções para os computadores.

- Podem ser de 3 tipos:
  - linguagem de **máquina**: diretamente entendidas pelos computadores;
  - linguagens de **montagem**: precisam de um programa montador para gerar linguagem de máquina
  - linguagens de **alto nível**: precisam de um compilador para traduzi-las para uma linguagem de montagem.

##### Linguagens de Máquina

- É uma sequência de ``0``s e `1`s que pode ser executada por um computador.
- Cada processador tem uma linguagem de máquina própria, ou seja, entende sequências de `0`s e `1`s como comandos diferentes.
- O conjunto de instruções pode diferir conforme o tipo do processador.
- Exemplos de instruções:

```Binário
0001 0000 0010 0010 0010 0000 0000 0101
```

#### Linguagem de Montagem

- Linguagem que utiliza siglas para representar comandos em sequências de `0`s e `1`s. Ex: *Assembly*.
- Um montador traduz este código para linguagem de máquina.

- Exemplo de código Assembly retirado [daqui](https://pt.wikipedia.org/wiki/Linguagem_assembly)

```Assembly
; Código Olá Mundo feito para arquitetura 8086

[BITS 16]          ; Faz o assembler gerar código 16-bits
[ORG 0x7C00]       ; A BIOS carrega nosso programa no endereço 0x7C00

mov si, Hello      ; Carregar a string de Hello World
call Print         ; Chamar nossa rotina para escrever a string

jmp $              ; Parar o programa em um loop infinito

; Rotina para escrever strings
Print:
  lodsb        ; Carregar um caractere da string em AL
  cmp al, 0    ; Ver se estamos no final da string (caractere 0x00)
  je .END      ; Se sim, pular para o final da rotina
  mov ah, 0Eh  ; Configurar AH para chamar a rotina 0Eh da BIOS
  int 10h      ; Executar a interrupção de vídeo
  jmp Print    ; Escrever o próximo caractere
.END:     ; Final da rotina
ret       ; Retornar

; String Hello
Hello: db "Ola mundo!", 0x00

;=========================================
; Preencher o resto do arquivo com zeros
times 510-($-$$) db 0
; Assinatura da BIOS
dw 0xAA55
```

#### Linguagens de Programação de Alto Nível

- São linguagens cujos comandos são mais próximos da linguagem humana.
- Exemplos: *C, C++, Java, Python, JavaScript, Haskell, Prolog*, dentre outras.
- O compilador é responsável por ler um código nesta linguagem e traduzi-lo para uma linguagem de montagem.
- Exemplos: *GCC, Visual Studio*, dentre outros.
- O montador, por sua vez, gera um código executável em um determinado computador.

---

### Do algoritmo para um programa em C

1. O programador escreve o algoritmo na linguagem C em um arquivo de texto, chamado de **código fonte**.
2. O compilador gera códigos objeto a partir da **compilação** dos códigos fonte.
3. Os códigos objeto de um ou mais códigos fonte são unidos pelo **linker**, gerando um programa executável.
4. O código executável é carregado na **memória** pelo **loader**.
5. A CPU executa as **instruções** carregadas.
6. Quando encontramos erros no funcionamento do programa, é possível depurá-lo com um **depurador**.

### Estrutura de um programa em C

```C
#Declaração de Bibliotecas Utilizadas

// Comentários

/* Comentários */

int main(void){
  Declaração de Variáveis
  Comandos
}
```

#### Escrevendo um programa em C

Suponha o arquivo `programa.c` com o conteúdo a seguir:

```C
#include <stdio.h>

// Isto é um comentário!

int main( void ) {

  int resultado = 1234+456;
  printf("1234 + 456 = %d \n" , resultado);
  return 0;

}
```

---
