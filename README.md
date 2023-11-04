# Árvore Rubro-Negra esquerdista

São árvores binárias de busca que seguem as seguintes regras:

**1 -** Todo nó da árvore é vermelho ou preto.

**2 -** A raiz é preta.

**3 -** Se um nó é vermelho:

    - Seus dois filhos só podem ser pretos.

    - É filho esquerdo de um nó preto.

**4 -** Em cada nó, o caminho para qualquer uma de suas folhas possui a mesma quantidade de nós pretos.

<p align="center">
<img src="/assets/arvoreRubro.jpeg" width="450" />
</p>

## Inserção

A inserção ocorre da mesma forma que na árvore binária de busca, mas o nó é sempre inserido com a cor vermelha e depois há correção caso necessário.

## Corrigindo a árvore

Ao inserir na árvore rubro-negra esquerdista, como o nó é sempre inserido como vermelho pode acabar quebrando as regras da árvore. Portanto precisamos corrigílos.

Problemas que podem ocorrer:

### 1 - Raiz com filho esquerdo preto e direito vermelho

**Solução:** rotação p/esquerda.

### 2 - Raiz com os dois filhos vermelhos

**Solução:** subida de cor.

### 3 - Raiz preta com filho esquerdo e neto esquerdo vermelho

**Solução:** rotação p/direita.