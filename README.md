# Árvore Rubro-Negra esquerdista

São árvores binárias de busca que seguem as seguintes regras:

**1 -** Todo nó da árvore é vermelho ou preto.

**2 -** A raiz é preta.

**3 -** Se um nó é vermelho:

    - Seus dois filhos só podem ser pretos.

    - É filho esquerdo de um nó preto.

**4 -** Em cada nó, o caminho para qualquer uma de suas folhas possui a mesma quantidade de nós pretos.

**5 -** As folhas são NULL e tem cor preta.

<p align="center">
<img src="/assets/arvoreRubro.jpeg" width="450" />
</p>

## Inserção

A inserção ocorre da mesma forma que na árvore binária de busca, mas o nó é sempre inserido com a cor vermelha e depois há correção caso necessário.

## Problemas de inserção árvore

Ao inserir na árvore rubro-negra esquerdista, como o nó é sempre inserido como vermelho pode acabar quebrando as regras da árvore. Portanto precisamos corrigílos.

Problemas que podem ocorrer:

### 1 - Raiz com filho esquerdo preto e direito vermelho

**Solução:** rotação p/esquerda.

### 2 - Raiz com os dois filhos vermelhos

**Solução:** subida de cor.

### 3 - Raiz preta com filho esquerdo e neto esquerdo vermelho

**Solução:** rotação p/direita.

## Operações  de correção

Mostrarei as operações de correção citadas a cima como solução dos problemas.

### Rotação para esquerda

<p align="center">
<img src="/assets/rotacaoEsquerda.jpeg" width="450" />
</p>

### Rotação para direita

<p align="center">
<img src="/assets/rotacaoDireita.jpeg" width="450" />
</p>

### Subida de cor 

<p align="center">
<img src="/assets/subidaCor.jpeg" width="450" />
</p>